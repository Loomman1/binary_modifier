#include "runnable.h"
#include "QDebug"
#include "QDir"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDirIterator"
#include "QTimer"
#include <QBitArray>


Runnable::Runnable(QObject *parent)
    : QObject{parent}
{}

//операция XOR между строками

QByteArray Runnable:: xorStrings(const QByteArray& data) {
    QByteArray result;
    result.resize(data.size());
    for (int i = 0; i < data.size(); ++i)
    {
        result[i] = data.at(i)^m_key.at(i % m_key.size());
    }
    return result;
}

//формирование уникального имени
QString Runnable:: formUniqueName(QString path, QString fileAbsoluteName) {
    QFile file(fileAbsoluteName);
    QFileInfo fileInfo(file);
    QString fileNameNoExt = fileInfo.baseName(); // Имя без расширения
    QString fileExt = fileInfo.suffix(); //расширение
    QString rezName;
    int counter=0;
    do{
        counter+=1;
        rezName = path+"/"+fileNameNoExt+"_"+QString::number(counter)+"."+fileExt;
    }while(QFileInfo::exists(rezName));
    return rezName;
}

QString Runnable:: formCommonName(QString path, QString fileAbsoluteName) {
    QFile file(fileAbsoluteName);
    QFileInfo fileInfo(file);
    QString fileNameNoExt = fileInfo.baseName(); // Имя без расширения
    QString fileExt = fileInfo.suffix(); //расширение
    QString rezName = path+"/"+fileNameNoExt+"."+fileExt;
    return rezName;
}

QStringList Runnable::findFilesToModify(QString path, QStringList filters)
{
    QStringList files;
    foreach(QString shablon, filters)
    {
        QDirIterator it(path, QStringList() << shablon, QDir::Files, QDirIterator::Subdirectories);
        while (it.hasNext())
        {
            files<< it.next();
        }
    }
    return files;
}

void Runnable::run(){
    qDebug()<<"Key info:";
    qDebug()<<"Size = "<<m_key.size();
    qDebug()<<"As byte array = "<<m_key;
    qDebug()<<"As hex = "<<m_key.toHex(' ');
    qDebug()<<"As hex = "<<m_key.toHex('');

    do
    {
        m_files=findFilesToModify(m_dir1, m_filters);
        foreach (const QString &file, m_files) {
            QDir dirrr(m_dir2);
            QString fileRezPath = "";
            if(m_rewrite){
                fileRezPath = formCommonName(dirrr.absolutePath(), file);
            }else{
                fileRezPath = this->formUniqueName(dirrr.absolutePath(), file);
            }
            QFile inputFile(file);
            QFile outputFile(fileRezPath);
            if (inputFile.open(QIODevice::ReadOnly)&&outputFile.open(QIODevice::WriteOnly))
            {
                while (!inputFile.atEnd())//файл построчно
                {
                    QByteArray line = inputFile.read(16);
                    QByteArray rez = this->xorStrings(line);
                    outputFile.write(rez);
                }
                inputFile.close();
                if(m_delFiles){
                    QFile::remove(file);
                }
                outputFile.close();
            }
        }
        if(m_repeat){
            QThread::sleep(m_duration_sec);
        }
    }while(m_repeat);
    emit finished();
}

bool Runnable::running() const
{
    return m_running;
}

void Runnable::setRunning(bool newRunning)
{
    if (m_running == newRunning)
        return;
    m_running = newRunning;
    emit runningChanged();
}

QByteArray Runnable::key() const
{
    return m_key;
}

void Runnable::setKey(const QByteArray &newKey)
{
    if (m_key == newKey)
        return;
    m_key = newKey;
    emit keyChanged();
}

QString Runnable::dir1() const
{
    return m_dir1;
}

void Runnable::setDir1(const QString &newDir1)
{
    if (m_dir1 == newDir1)
        return;
    m_dir1 = newDir1;
    emit dir1Changed();
}

QString Runnable::dir2() const
{
    return m_dir2;
}

void Runnable::setDir2(const QString &newDir2)
{
    if (m_dir2 == newDir2)
        return;
    m_dir2 = newDir2;
    emit dir2Changed();
}

QStringList Runnable::files() const
{
    return m_files;
}

void Runnable::setFiles(const QStringList &newFiles)
{
    if (m_files == newFiles)
        return;
    m_files = newFiles;
    emit filesChanged();
}

bool Runnable::delFiles() const
{
    return m_delFiles;
}

void Runnable::setdelFiles(bool newDelFiles)
{
    if (m_delFiles == newDelFiles)
        return;
    m_delFiles = newDelFiles;
    emit delFilesChanged();
}

QStringList Runnable::filters() const
{
    return m_filters;
}

void Runnable::setfilters(const QStringList &newFilters)
{
    if (m_filters == newFilters)
        return;
    m_filters = newFilters;
    emit filtersChanged();
}

bool Runnable::repeat() const
{
    return m_repeat;
}

void Runnable::setrepeat(bool newRepeat)
{
    if (m_repeat == newRepeat)
        return;
    m_repeat = newRepeat;
    emit repeatChanged();
}

int Runnable::duration_sec() const
{
    return m_duration_sec;
}

void Runnable::setduration_sec(int newDuration_sec)
{
    if (m_duration_sec == newDuration_sec)
        return;
    m_duration_sec = newDuration_sec;
    emit duration_secChanged();
}

bool Runnable::rewrite() const
{
    return m_rewrite;
}

void Runnable::setrewrite(bool newRewrite)
{
    if (m_rewrite == newRewrite)
        return;
    m_rewrite = newRewrite;
    emit rewriteChanged();
}
