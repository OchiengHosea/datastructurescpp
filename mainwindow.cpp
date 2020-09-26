#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "scores.h"
#include "gameentry.h"
#include <QtUiTools>
#include <QWidget>
#include <tictactoe.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TicTacToe ttt;
    ttt.clearBoard();
    ttt.putMark(0,0); ttt.putMark(1,1);
    ttt.putMark(0, 1); ttt.putMark(0,2);
    ttt.putMark(2, 0); ttt.putMark(1,2);
    ttt.putMark(2,2); ttt.putMark(2,1);
    ttt.putMark(1,0);
    ttt.printBoard();
    int winner = ttt.getWinner();
    std::cout << std::to_string(winner) << std::endl;
    std::cout << "Arrays and lists" << std::endl;
    Scores mscores; // initialize new scores entries
    mscores.add(GameEntry("first", 45));
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
