#include "collectionlists.h"
#include "ui_collectionlists.h"

CollectionLists::CollectionLists(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CollectionLists)
{
    ui->setupUi(this);
}

CollectionLists::~CollectionLists()
{
    delete ui;
}
