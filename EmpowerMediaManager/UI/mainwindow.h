#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "collectionlists.h"
#include "itemview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionE_xit_triggered();
    void InitializeUI();

private:
    Ui::MainWindow *ui;
    CollectionLists *collectionLists;
    ItemView *itemView;
};

#endif // MAINWINDOW_H
