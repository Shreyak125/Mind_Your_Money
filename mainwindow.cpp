#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnLogin, &QPushButton::clicked, this, &MainWindow::on_btnLogin_clicked);
    connect(ui->btnSignup, &QPushButton::clicked, this, &MainWindow::on_btnSignup_clicked);
    connect(ui->btnForgot, &QPushButton::clicked, this, &MainWindow::on_btnForgot_clicked);
    connect(ui->btnPrev, &QPushButton::clicked, this, &MainWindow::on_btnPrev_clicked);
    connect(ui->btnPrev_2, &QPushButton::clicked, this, &MainWindow::on_btnPrev_2_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnLogin_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_btnSignup_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_btnForgot_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_btnPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}



void MainWindow::on_btnPrev_2_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

