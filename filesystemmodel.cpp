#include "filesystemmodel.h"

FileSystemModel::FileSystemModel(QObject *parent):
    QFileSystemModel(parent)
{
}

FileSystemModel::~FileSystemModel()
{
}

QModelIndex FileSystemModel::index(const QString &path, int column) const
{
    return QFileSystemModel::index(path, column);
}
