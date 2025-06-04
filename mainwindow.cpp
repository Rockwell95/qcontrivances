#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::toggleEnabled(bool disabled) {

    this->ui->pushButton->onParentDisabled(disabled);
    this->setEnabled(!disabled);
}

void MainWindow::overrideButton(bool override)
{
    // auto pushButton = this->ui->pushButton;

    // QWidget virtualParent;

    // pushButton->setParent(&virtualParent);
}
