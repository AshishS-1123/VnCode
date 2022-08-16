#include "SidebarWidget.h"

void SideBarWidget::setupUi () {
    // Add styles and other properties to make tab bar look like vscode.
    setTabPosition (QTabWidget::TabPosition::West);
    setIconSize(QSize(24, 24));

    // Open the CSS file and add styles to it.
    QFile File(":/styles/sidebar.qss");                                                  
    File.open(QFile::ReadOnly);
    QString styles = QLatin1String(File.readAll());
    setStyleSheet(styles);
    
    // Start adding tabs.

    // TODO: remove these later.
    QWidget* emptyWidget1 = new FilesTab(this);
    QWidget* emptyWidget2 = new QWidget();
    QWidget* emptyWidget3 = new QWidget();
    QWidget* emptyWidget4 = new QWidget();
   
    addTab(emptyWidget1, QIcon(":/icons/fileExplorer.svg") , "");
    addTab(emptyWidget2, QIcon(":/icons/searchFiles.svg") , "");
    addTab(emptyWidget3, QIcon(":/icons/versionControl.svg") , "");
    addTab(emptyWidget4, QIcon(":/icons/extensions.svg") , "");
}
