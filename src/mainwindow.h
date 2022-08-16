#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QBoxLayout>
#include <QSplitter>
#include "./Layout/LeftSideBar/SidebarWidget.h"

class MainWindow : public QMainWindow {
Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void setupUi ();
};

#endif // MAINWINDOW_H
