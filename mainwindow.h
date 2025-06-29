#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QFileInfo>
#include <QThread>
#include <runnable.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool makeChecks();
    // QByteArray xorStrings(const QByteArray& data);
    // QString formUniqueName(const QString path, QString fileName);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_checkBoxTXT_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxJPG_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxLIB_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxMP3_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxPNG_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxGIF_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxBAT_checkStateChanged(const Qt::CheckState &arg1);

    void on_checkBoxEXE_checkStateChanged(const Qt::CheckState &arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_checkBox_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::MainWindow *ui;
    QString pathToFiles, pathToRezFiles;
    QByteArray key;
    bool flag;
    bool deleteFiles;
    QThread thread_1;
    Runnable runnable_1;

};
#endif // MAINWINDOW_H
