#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include <QSqlDatabase>
#include <QFile>
#include <QSqlQuery>
#include <QSqlError>
#include <QUuid>
#include<QMessageBox>

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
    //connect(ui->btnSave1, &QPushButton::clicked, this, &MainWindow::on_btnSave1_clicked);



    //Database initialize
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../../data.db");
    if (!db.open()) {
        QMessageBox::critical(this, "Database Error", "Failed to connect to database: " + db.lastError().text());
    }

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


void MainWindow::on_btnSave1_clicked()
{
    QString FirstName=ui->txtFirstName->text();
    QString MiddleName=ui->txtMiddle->text();
    QString LastName=ui->txtLastName->text();
    QString Email=ui->txtEmail->text();
    QString Phone=ui->txtPhone->text();
    QString Password=ui->txtPassword->text();

    QSqlQuery qry;


    // Prepare the SQL statement with placeholders
    qry.prepare("INSERT INTO User (FirstName, MiddleName, LastName, Email, Phone, Password) "
                  "VALUES (:FirstName, :MiddleName, :LastName, :Email, :Phone, :Password)");

    // Bind the values to the placeholders

    qry.bindValue(":FirstName", FirstName);
    qry.bindValue(":MiddleName", MiddleName);
    qry.bindValue(":LastName", LastName);
    qry.bindValue(":Email", Email);
    qry.bindValue(":Phone", Phone);
    qry.bindValue(":Password", Password);


    // Execute the query and check for errors
    if (!qry.exec()) {
        qDebug() << "Last error:" << qry.lastError().text();
    } else {
        qDebug() << "User record inserted successfully!";
    }

    // Close the database connection

}

