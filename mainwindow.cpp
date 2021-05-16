#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <iostream>
#include <QDir>
#include <QString>
#include <string>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logo(":/Assets/Images/Tate.png");
    int w = ui->logo->width();
    int h = ui->logo->height();
    ui->logo->setPixmap(logo.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap home(":/Assets/Images/TateHome.png");
    int w1 = ui->home->width();
    int h1 = ui->home->height();
    ui->home->setPixmap(home.scaled(w1,h1,Qt::KeepAspectRatio));

    QPixmap homeicon(":/Assets/Images/Home.png");
    int w2 = ui->homeicn->width();
    int h2 = ui->homeicn->height();
    ui->homeicn->setPixmap(homeicon.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap disicon(":/Assets/Images/disableusr.png");
    int w3 = ui->disicn->width();
    int h3 = ui->disicn->height();
    ui->disicn->setPixmap(disicon.scaled(w3,h3,Qt::KeepAspectRatio));

    QPixmap addicon(":/Assets/Images/addusr.png");
    int w4 = ui->newicn->width();
    int h4 = ui->newicn->height();
    ui->newicn->setPixmap(addicon.scaled(w4,h4,Qt::KeepAspectRatio));

    QPixmap grouprefresh(":/Assets/Images/groupref.png");
    int w5 = ui->grpicn->width();
    int h5 = ui->grpicn->height();
    ui->grpicn->setPixmap(grouprefresh.scaled(w5,h5,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    system("start powershell.exe -executionPolicy RemoteSigned -file \".\\Scripts\\Script.ps1\" test");
}

