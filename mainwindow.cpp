#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include <QDir>
#include <QString>
#include "QFileDialog"
#include "QDirIterator"
#include "QRegularExpression"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&thread_1,QThread::started, &runnable_1, &Runnable::run); //как только поток запустился, вызывается метод run()
    connect(&runnable_1, &Runnable::finished, &thread_1, &QThread::terminate); //завершение выполнения потока при получении finished
    runnable_1.moveToThread(&thread_1);
}

MainWindow::~MainWindow()
{
    delete ui;
}
bool MainWindow::makeChecks(){
    //Проверка 8-байтного ключа
    int length = ui->lineEdit_3->text().length();
    QRegularExpression hexMatcher("[0-9A-Fa-f]", QRegularExpression::CaseInsensitiveOption);
    QRegularExpressionMatch match = hexMatcher.match(ui->lineEdit_3->text().toUtf8());
    if(length==16)
    {    if(match.hasMatch()){
            key = ui->lineEdit_3->text().toUtf8();
        }else{
        QMessageBox::warning(this, "Внимание!", "Введенный ключ не является числом в 16-ричной системе");
             return false;
        }
    }else{
        QMessageBox::warning(this, "Внимание!", "Введенный ключ должен содержать 16 символов!\
                                                 Сейчас символов: " + QString::number(length));
        return false;
    }

    //Проверка, что задана входная директория
    if((ui->lineEdit->text()=="")||(!QDir(ui->lineEdit->text()).exists()))
    {
        ui->lineEdit->setStyleSheet("QLineEdit { border: 2px solid red; }");
        QMessageBox::information(this, "Внимание!", "Исходной папки не существует");
        qDebug()<<"Исходной папки не существует";
        return false;
    }
    //Проверка, что заданы выходная директория
    if((ui->lineEdit_2->text()=="")||(!QDir(ui->lineEdit_2->text()).exists()))
    {
        ui->lineEdit_2->setStyleSheet("QLineEdit { border: 2px solid red; }");
        QMessageBox::information(this, "Внимание!", "Результирующей папки не существует");
        qDebug()<<"Результирующей папки не существует";
        return false;
    }
    return true;
}

void MainWindow::on_pushButton_clicked()
{
    if(!makeChecks()) return;

    //Создание маски файлов по выбранным типам
    QStringList filters;
    if(ui->checkBoxTXT->isChecked()){filters << "*.txt";}
    if(ui->checkBoxJPG->isChecked()){filters << "*.jpg";}
    if(ui->checkBoxLIB->isChecked()){filters << "*.lib";}
    if(ui->checkBoxMP3->isChecked()){filters << "*.mp3";}
    if(ui->checkBoxPNG->isChecked()){filters << "*.png";}
    if(ui->checkBoxGIF->isChecked()){filters << "*.gif";}
    if(ui->checkBoxBAT->isChecked()){filters << "*.bat";}
    if(ui->checkBoxEXE->isChecked()){filters << "*.exe";}

    //Если типов не выбрано, ищем по шаблону
    if(filters.length()==0&&ui->lineEdit_4->text()!="")
    {
        filters<<ui->lineEdit_4->text();
    }
    QString delFilesPhrase="БУДУТ";
    if(ui->radioButton->isChecked()) {
        this->deleteFiles=true;    } else if(ui->radioButton_2->isChecked()){
        this->deleteFiles=false;
        delFilesPhrase="НЕ БУДУТ";
    }
    runnable_1.setrepeat(false);
    runnable_1.setduration_sec(-1);
    //для разового запуска
    if(!ui->checkBox->isChecked())
    {
        qDebug()<<filters;
        // Получаем список файлов
        QStringList files;// = dir.entryList(filters, QDir::Files | QDir::NoDotAndDotDot);

        foreach(QString shablon, filters)
        {
            QDirIterator it(this->pathToFiles, QStringList() << shablon, QDir::Files, QDirIterator::Subdirectories);
            while (it.hasNext())
            {
                files<< it.next();
            }
        }

        QString strOut="Будут преобразованы следующие файлы: ";
        foreach(QString file, files)
        {
            QFile file1(file);
            QFileInfo fileInfo(file1);
            strOut=strOut+fileInfo.baseName()+"."+fileInfo.suffix()+"; ";
        }
        strOut=strOut+". Исходные файлы "+delFilesPhrase+" удалены. Продолжить?";

        //Подтверждение действия пользователем.
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Подтверждение действия", strOut, QMessageBox::Yes | QMessageBox::No);//да/нет
        if(reply == QMessageBox::No)
        {       return;    }
    }else if(ui->checkBox->isChecked())
    {
        runnable_1.setrepeat(true);
        runnable_1.setduration_sec(ui->spinBox->value()*3600+ui->spinBox_3->value()*60+ui->spinBox_4->value());
    }
    //Передача данных в поток
    runnable_1.setfilters(filters);
    runnable_1.setKey(this->key);
    runnable_1.setDir1(this->pathToFiles);
    runnable_1.setDir2(this->pathToRezFiles);
    runnable_1.setdelFiles(deleteFiles);
    runnable_1.setrewrite(ui->radioButton_3->isChecked());

    //Запуск потока
    runnable_1.setRunning(true);
    thread_1.start();
}

//Выбрать путь исходных файлов
void MainWindow::on_pushButton_2_clicked()
{
    QString Path=QFileDialog::getExistingDirectory();
    this->pathToFiles=Path;
    qDebug()<<"Путь к исходным файлам: "<<this->pathToFiles;
    ui->lineEdit->setText(Path);
}


void MainWindow::on_pushButton_3_clicked()
{
    QString Path=QFileDialog::getExistingDirectory();
    this->pathToRezFiles=Path;
    qDebug()<<"Путь к исходным файлам: "<<this->pathToRezFiles;

    ui->lineEdit_2->setText(Path);
}

//Очистка галочек при редактировании шаблона файлов
void MainWindow::on_lineEdit_4_textChanged(const QString &arg1)
{
    ui->checkBoxBAT->setChecked(false);
    ui->checkBoxEXE->setChecked(false);
    ui->checkBoxJPG->setChecked(false);
    ui->checkBoxPNG->setChecked(false);
    ui->checkBoxGIF->setChecked(false);
    ui->checkBoxLIB->setChecked(false);
    ui->checkBoxMP3->setChecked(false);
    ui->checkBoxTXT->setChecked(false);
}

//Очистка строки шаблона при установке одной из галочек
void MainWindow::on_checkBoxTXT_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxJPG_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxLIB_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxMP3_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxPNG_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxGIF_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxBAT_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}
void MainWindow::on_checkBoxEXE_checkStateChanged(const Qt::CheckState &arg1){ui->lineEdit_4->setText("");}


void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    ui->lineEdit->setStyleSheet("QLineEdit { border: 1px solid black; }");
}


void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{
    ui->lineEdit_2->setStyleSheet("QLineEdit { border: 1px solid black; }");
}


void MainWindow::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    if(ui->checkBox->isChecked())
    {
        ui->spinBox->setEnabled(true);
        ui->spinBox_3->setEnabled(true);
        ui->spinBox_4->setEnabled(true);
    }else{
        ui->spinBox->setEnabled(false);
        ui->spinBox_3->setEnabled(false);
        ui->spinBox_4->setEnabled(false);
    }
}

