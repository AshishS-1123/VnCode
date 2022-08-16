#ifndef FILE_EXPLORER_WIDGET_H
#define FILE_EXPLORER_WIDGET_H

#include <QCoreApplication>
#include <QTreeView>
#include <QFileSystemModel>
#include <QDir>

class FilesTab: public QTreeView {
Q_OBJECT

public:
    FilesTab(QWidget* parent = nullptr) : QTreeView (parent) {
        setupUi();
    }

private:
    void setupUi();
};

#endif