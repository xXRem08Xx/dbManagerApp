#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogconnexion.h"
#include "jonathan.cpp"
//#include "remi.cpp"
#include "nolann.cpp"
#include "ugo.cpp"
//#include "theo.cpp"

/**
 * @brief MainWindow::MainWindow
 * Constructeur de la MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //setWindowTitle("dbManagerApp - "+databaseName+" - "+databaseIp+" - "+databaseUser);
    afficherListeTable();
}

/**
 * @brief MainWindow::~MainWindow
 * Destructeur de la MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}


