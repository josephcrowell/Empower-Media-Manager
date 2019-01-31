#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    InitializeUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitializeUI()
{
    collectionLists = new CollectionLists(this);
    ui->verticalLayoutCollectionLists->addWidget(collectionLists);
    itemView = new ItemView(this);
    ui->verticalLayoutItemView->addWidget(itemView);
}

void MainWindow::on_actionE_xit_triggered()
{
    this->close();
}
