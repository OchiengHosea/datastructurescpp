#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QtUiTools>
#include <QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showALRWindow() {
    std::cout << "Showing Arrays, Lists and recursion" << std::endl;
    QUiLoader loader;
    QFile file(":/forms/arrays_linked_lists_recursion.ui");
    file.open(QFile::ReadOnly);
    QWidget *myWidg = loader.load(&file, this);
    file.close();
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(myWidg);
    this->setCentralWidget(myWidg);
    setLayout(layout);
}

void MainWindow::when_alr_clicked() {
    showALRWindow();
}
