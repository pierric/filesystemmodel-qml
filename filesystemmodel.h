#ifndef FILESYSTEMMODEL_H
#define FILESYSTEMMODEL_H

#include <QtWidgets/QFileSystemModel>

class FileSystemModel : public QFileSystemModel
{
    Q_OBJECT
    Q_DISABLE_COPY(FileSystemModel)

public:
    FileSystemModel(QObject *parent = 0);
    virtual ~FileSystemModel();

    Q_PROPERTY(QString rootPath READ rootPath WRITE setRootPath)

    Q_INVOKABLE QModelIndex index(const QString &path, int column = 0) const;
};

#endif // FILESYSTEMMODEL_H
