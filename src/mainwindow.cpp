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

    // In order to make the code editor and tabs widget resizable,
    // add them to a QSplitter.
    QSplitter* splitter = new QSplitter(this);
    splitter->addWidget (new SideBarWidget(splitter));
    splitter->addWidget (new SideBarWidget(splitter));
    splitter->addWidget (new SideBarWidget(splitter));
    splitter->addWidget (new SideBarWidget(splitter));
    

    // Add widgets to layout using layout->addWidget()
    layout->addWidget (splitter);

    // Attach the layout to the main window.
    QWidget* window = new QWidget();
    window->setLayout (layout);
    
    setCentralWidget(window);
}

MainWindow::~MainWindow()
{
}

