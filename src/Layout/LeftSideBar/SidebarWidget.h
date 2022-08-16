#ifndef SIDEBAR_WIDGET_H
#define SIDEBAR_WIDGET_H
#include <QTabWidget>
#include <QFile>
#include <QSize>

#include "Tabs/FilesTab.h"

class SideBarWidget: public QTabWidget {
Q_OBJECT

public:
    SideBarWidget (QWidget* parent = nullptr) : QTabWidget (parent) {
        setupUi();
    };

private:
    void setupUi();
};

#endif