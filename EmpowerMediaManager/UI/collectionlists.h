#ifndef COLLECTIONLISTS_H
#define COLLECTIONLISTS_H

#include <QMainWindow>

namespace Ui {
class CollectionLists;
}

class CollectionLists : public QMainWindow
{
    Q_OBJECT

public:
    explicit CollectionLists(QWidget *parent = nullptr);
    ~CollectionLists();

private:
    Ui::CollectionLists *ui;
};

#endif // COLLECTIONLISTS_H
