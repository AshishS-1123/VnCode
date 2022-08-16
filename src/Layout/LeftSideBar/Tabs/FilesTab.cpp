#include "FilesTab.h"

void FilesTab::setupUi () {
    // Create a file system model based on the path provided as command line parameter.
    QString mPath = QCoreApplication::arguments().at(1);
    QFileSystemModel* fileSystemModel = new QFileSystemModel(this);
    fileSystemModel->setFilter(QDir::NoDot | QDir::NoDotDot | QDir::AllEntries);

    // Create the TreeView widget using this model.
    setModel(fileSystemModel);
    setRootIndex(fileSystemModel->setRootPath(mPath));

    // Remove all columns except the name of files.
    setColumnHidden(1, true);
    setColumnHidden(2, true);
    setColumnHidden(3, true);

    // Remove the header.
    // TODO: Implement custom header later.
    setHeaderHidden(true);
    // This is to allow proper resizing the tabs.
    setMinimumWidth(1);

    // Custom styling
    QFile File(":/styles/filesTab.qss");                                                  
    File.open(QFile::ReadOnly);
    QString styles = QLatin1String(File.readAll());
    setStyleSheet(styles);
}
