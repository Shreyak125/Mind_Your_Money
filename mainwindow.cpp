#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStackedWidget>
#include <QSqlDatabase>
#include <QFile>
#include <QSqlQuery>
#include <QSqlError>
#include <QUuid>
#include<QMessageBox>
#include <QDateTime>
#include <QTimer>
#include<vector>
#include<string>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{




    ui->setupUi(this);



    // Create a QTimer to update the date and time
    QTimer *timer = new QTimer(this);

    // Connect the timer's timeout signal to the updateDateTime slot
    connect(timer, &QTimer::timeout, this, &MainWindow::updateDateTime);

    // Start the timer with an interval of 1 second
    timer->start(1000);

    // Set the initial date and time
    updateDateTime();


    //Connecting buttons
    connect(ui->btnLogin, &QPushButton::clicked, this, &MainWindow::on_btnLogin_clicked);
    connect(ui->btnSignup, &QPushButton::clicked, this, &MainWindow::on_btnSignup_clicked);
    connect(ui->btnForgot, &QPushButton::clicked, this, &MainWindow::on_btnForgot_clicked);
    connect(ui->btnPrev, &QPushButton::clicked, this, &MainWindow::on_btnPrev_clicked);
    connect(ui->btnPrev_2, &QPushButton::clicked, this, &MainWindow::on_btnPrev_2_clicked);
    //connect(ui->btnSave1, &QPushButton::clicked, this, &MainWindow::on_btnSave1_clicked);
    connect(ui->btnEPrev, &QPushButton::clicked, this, &MainWindow::on_btnEPrev_clicked);
    connect(ui->btnEnter, &QPushButton::clicked, this, &MainWindow::on_btnEnter_clicked);
     connect(ui->btnHome, &QPushButton::clicked, this, &MainWindow::on_btnHome_clicked);
    connect(ui->btnNext, &QPushButton::clicked, this, &MainWindow::on_btnNext_clicked);
     connect(ui->btnSaveExpense, &QPushButton::clicked, this, &MainWindow::on_SaveExpense_clicked);



    //Database initialize
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("F:\\Startingqt\\databaseproject\\build\\Desktop_Qt_6_8_1_MinGW_64_bit-Debug\\data.db");
    if(db.open())
    {
        qDebug()<<"Database Is Connected";

    }
    else{
        qDebug()<<"Error while connecting: "<<DB_Connection.lastError();
    }

    //CREATING A TABLE
    QString createTableSQL = R"(
    CREATE TABLE IF NOT EXISTS User (
        UserID INTEGER PRIMARY KEY AUTOINCREMENT,
        FirstName TEXT NOT NULL,
        MiddleName TEXT,
        LastName TEXT NOT NULL,
        Email TEXT UNIQUE NOT NULL,
        Phone TEXT NOT NULL,
        Password TEXT NOT NULL,
        MonthlyBudget REAL NOT NULL
    )
)";
    if (!query.exec(createTableSQL)) {
        qDebug() << "Error creating table:" << query.lastError().text();
    } else {
        qDebug() << "Table created or already exists.";
    }

    //Creating an Expense Table

    QString createExpensesTable = R"(
    CREATE TABLE IF NOT EXISTS Expenses (
        ExpenseID INTEGER PRIMARY KEY AUTOINCREMENT,
        UserID INTEGER NOT NULL,
        Category TEXT NOT NULL,
        Amount REAL NOT NULL,
        Date TEXT DEFAULT CURRENT_TIMESTAMP,
        FOREIGN KEY (UserID) REFERENCES User(UserID)
    );
)";

    if (!qry.exec(createExpensesTable)) {
        qDebug() << "Error creating Expenses table:" << qry.lastError().text();
    } else {
        qDebug() << "Expenses table created or already exists.";
    }

}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::updateDateTime()
{
    // Get the current date and time
    QString currentDateTime = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

    // Display it in the QLabel (assuming QLabel is named lblDateTime in your UI)
    ui->lblDateTime->setText(currentDateTime);
}

void MainWindow::on_btnLogin_clicked()
{
    QString Email = ui->txtEmail->text();
    QString Password = ui->txtPassword->text();

    if (Email.isEmpty() || Password.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please enter both Email and Password.");
        return;
    }

    // Query to check the credentials and retrieve UserID
    QSqlQuery query;
    query.prepare("SELECT UserID, FirstName, LastName FROM User WHERE Email = :Email AND Password = :Password");
    query.bindValue(":Email", Email);
    query.bindValue(":Password", Password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        // Login successful
        int userID = query.value("UserID").toInt();
        QString firstName = query.value("FirstName").toString();
        QString lastName = query.value("LastName").toString();

        // Store the logged-in user's ID globally (or use a member variable)
        loggedInUserID = userID;  // Assuming you have declared `loggedInUserID` as a member of MainWindow

        QMessageBox::information(this, "Login Successful", "Welcome, " + firstName + " " + lastName + "!");

        // Navigate to the main page or dashboard (e.g., page 4)
        ui->stackedWidget->setCurrentIndex(4);
    } else {
        // Login failed
        QMessageBox::warning(this, "Login Failed", "Invalid Email or Password.");
    }
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
    QString Email=ui->txtEmailA->text();
    QString Phone=ui->txtPhone->text();
    QString Password=ui->txtPasswords->text();
    QString budgetText = ui->txtMonthlyBudget->text();
    float MonthlyBudget = budgetText.toFloat();

    QSqlQuery qry;


    qry.prepare(R"(
        INSERT INTO User (FirstName, MiddleName, LastName, Email, Phone, Password, MonthlyBudget)
        VALUES (:FirstName, :MiddleName, :LastName, :Email, :Phone, :Password, :MonthlyBudget)
    )");

    // Bind the values to the placeholders
    qry.bindValue(":FirstName", FirstName);
    qry.bindValue(":MiddleName", MiddleName);
    qry.bindValue(":LastName", LastName);
    qry.bindValue(":Email", Email);
    qry.bindValue(":Phone", Phone);
    qry.bindValue(":Password", Password);
    qry.bindValue(":MonthlyBudget", MonthlyBudget);

    // Execute the query and check for errors
    if (qry.exec()) {
        QMessageBox::information(this, "Success", "Data inserted successfully!");
        qDebug() << "Data inserted successfully!";
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to insert data: " + qry.lastError().text());
        qDebug() << "Error inserting data:" << qry.lastError().text();
    }

    // Clear the input fields
    ui->txtFirstName->clear();
    ui->txtMiddle->clear();
    ui->txtLastName->clear();
    ui->txtEmailA->clear();
    ui->txtPhone->clear();
    ui->txtPasswords->clear();
    ui->txtMonthlyBudget->clear();

}


void MainWindow::on_btnEPrev_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}





void MainWindow::on_btnHome_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_btnNext_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_btnReset_clicked()
{
    ui->txtFirstName->clear();
    ui->txtLastName->clear();
    ui->txtPhone->clear();
    ui->txtMiddle->clear();
    ui->txtPasswords->clear();
    ui->txtEmailA->clear();

}


void MainWindow::on_btnEnterExpense_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

}

void MainWindow::on_btnSaveExpense_clicked()
{
    // Retrieve data from UI
    QString expenseName = ui->ExpenseName->currentText(); // Combobox for category
    float expenseAmount = ui->LineEditAmount->text().toFloat(); // Expense amount from QLineEdit

    // Ensure the user is logged in (check loggedInUserID)
    if (loggedInUserID == -1) {
        QMessageBox::warning(this, "Error", "You must log in first.");
        return;
    }

    // Insert the expense into the database
    QSqlQuery query;
    query.prepare("INSERT INTO Expense (UserID, ExpenseName, ExpenseAmount) "
                  "VALUES (:UserID, :ExpenseName, :ExpenseAmount)");

    query.bindValue(":UserID", loggedInUserID);  // Use the logged-in user's ID
    query.bindValue(":ExpenseName", expenseName); // Expense category
    query.bindValue(":ExpenseAmount", expenseAmount); // Expense amount

    if (query.exec()) {
        QMessageBox::information(this, "Expense Added", "Your expense has been successfully recorded.");
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to save the expense: " + query.lastError().text());
    }
}




void MainWindow::on_btnPrev_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);

}

