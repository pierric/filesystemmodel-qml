#ifndef FILESYSTEMMODEL_PLUGIN_H
#define FILESYSTEMMODEL_PLUGIN_H

#include <QQmlExtensionPlugin>

class FileSystemModelPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // FILESYSTEMMODEL_PLUGIN_H
