#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) {
        // Create the UI
        setupUi();
}

void MainWindow::setupUi () {
    // Initial position and dimensions of window.
    setGeometry(100, 100, 1536, 864);
    setStyleSheet("background-color: #24292e");

    // Create a box layout for displaying the tab-bar (with filex, git, etc)
    // and code editor in horizontal layout.
    QBoxLayout* layout = new QBoxLayout(QBoxLayout::Direction::LeftToRight);
    layout->setContentsMargins(0, 0, 0, 0);

    // Add widgets to layout using layout->addWidget()
    layout->addWidget (new SideBarWidget(this));

    // Attach the layout to the main window.
    QWidget* window = new QWidget();
    window->setLayout (layout);
    
    setCentralWidget(window);
}

MainWindow::~MainWindow()
{
}

