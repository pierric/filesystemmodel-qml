#include "filesystemmodel_plugin.h"
#include "filesystemmodel.h"

#include <qqml.h>

void FileSystemModelPlugin::registerTypes(const char *uri)
{
    // @uri hsqml.model.filesystemmodel
    qmlRegisterType<FileSystemModel>(uri, 1, 0, "FileSystemModel");
}

