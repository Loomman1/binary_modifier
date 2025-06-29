#ifndef RUNNABLE_H
#define RUNNABLE_H

#include <QObject>
#include <QDir>


class Runnable : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runningChanged FINAL)
    Q_PROPERTY(bool delFiles READ delFiles WRITE setdelFiles NOTIFY delFilesChanged FINAL)
    Q_PROPERTY(bool repeat READ repeat WRITE setrepeat NOTIFY repeatChanged FINAL)
    Q_PROPERTY(QByteArray key READ key WRITE setKey NOTIFY keyChanged FINAL)
    Q_PROPERTY(QString dir1 READ dir1 WRITE setDir1 NOTIFY dir1Changed FINAL)
    Q_PROPERTY(QString dir2 READ dir2 WRITE setDir2 NOTIFY dir2Changed FINAL)
    Q_PROPERTY(QStringList files READ files WRITE setFiles NOTIFY filesChanged FINAL)
    Q_PROPERTY(QStringList filters READ filters WRITE setfilters NOTIFY filtersChanged FINAL)
    Q_PROPERTY(int duration_sec READ duration_sec WRITE setduration_sec NOTIFY duration_secChanged FINAL)
    Q_PROPERTY(bool rewrite READ rewrite WRITE setrewrite NOTIFY rewriteChanged FINAL)

    int count;
public:
    explicit Runnable(QObject *parent = nullptr);
    QByteArray xorStrings(const QByteArray& data);
    QString formUniqueName(QString path, QString fileName);//повторяющиеся файлы с индексами
    QString formCommonName(QString path, QString fileName);//путь к новому файлу с тем же именем
    QStringList findFilesToModify(QString path, QStringList filters);//находит список файлов, которые будут модифицированы
                                                                    //path - где искать, filters - шаблоны
    bool running() const;
    void setRunning(bool newRunning);

    bool delFiles() const;
    void setdelFiles(bool newDelFiles);

    bool repeat() const;
    void setrepeat(bool newRepeat);

    QByteArray key() const;
    void setKey(const QByteArray &newKey);

    QString dir1() const;
    void setDir1(const QString &newDir1);

    QString dir2() const;
    void setDir2(const QString &newDir2);

    QStringList files() const;
    void setFiles(const QStringList &newFiles);

    QStringList filters() const;
    void setfilters(const QStringList &newFilters);



    int duration_sec() const;
    void setduration_sec(int newDuration_sec);

    bool rewrite() const;
    void setrewrite(bool newRewrite);

signals:
    void finished();
    void runningChanged();
    void keyChanged();
    void dir1Changed();
    void dir2Changed();
    void filesChanged();

    void delFilesChanged();
    void filtersChanged();

    void repeatChanged();

    void duration_secChanged();

    void rewriteChanged();

public slots:
    void run();
private:
    bool m_running;
    bool m_delFiles;
    bool m_repeat;
    QByteArray m_key;
    QString m_dir1;
    QString m_dir2;
    QStringList m_files;
    QStringList m_filters;
    int m_duration_sec;
    bool m_rewrite;
};

#endif // RUNNABLE_H
