#include "SidebarWidget.h"

void SideBarWidget::setupUi () {
    // Add styles and other properties to make tab bar look like vscode.
    setTabPosition (QTabWidget::TabPosition::West);

    // Start adding tabs.

    // TODO: remove these later.
    QWidget* emptyWidget1 = new QWidget();
    QWidget* emptyWidget2 = new QWidget();
    QWidget* emptyWidget3 = new QWidget();
    QWidget* emptyWidget4 = new QWidget();
    
    addTab(emptyWidget1, QIcon(":/icons/fileExplorer.png") , "");
    addTab(emptyWidget2, QIcon(":/icons/searchFiles.png") , "");
    addTab(emptyWidget3, QIcon(":/icons/versionControl.png") , "");
    addTab(emptyWidget4, QIcon(":/icons/extensions.png") , "");
}
