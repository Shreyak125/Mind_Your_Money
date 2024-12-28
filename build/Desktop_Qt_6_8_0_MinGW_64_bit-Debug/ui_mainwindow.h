/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txtEmail;
    QLabel *label_3;
    QLineEdit *txtPassword;
    QPushButton *btnSignup;
    QPushButton *btnLogin;
    QPushButton *btnForgot;
    QWidget *page_2;
    QPushButton *btnSave1;
    QPushButton *btnReset;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *txtFirstName;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txtLastName;
    QLabel *label_7;
    QLineEdit *txtEmail_2;
    QLabel *label_8;
    QLineEdit *txtPhone;
    QLabel *label_9;
    QLineEdit *txtPassword_2;
    QLineEdit *txtMiddle;
    QPushButton *btnPrev;
    QWidget *page_4;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *txtFEmail;
    QLineEdit *txtFPhone;
    QPushButton *btnPrev_2;
    QPushButton *btnNext;
    QWidget *page_3;
    QLabel *label_10;
    QPushButton *btnEnter;
    QPushButton *btnEditexp;
    QPushButton *btnGraph;
    QPushButton *btnStats;
    QMenuBar *menubar;
    QMenu *menuHome_Page;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1051, 707);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 0, 1021, 651));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 0, 271, 111));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(260, 180, 531, 81));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEmail);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        btnSignup = new QPushButton(page);
        btnSignup->setObjectName("btnSignup");
        btnSignup->setGeometry(QRect(640, 290, 121, 31));
        btnLogin = new QPushButton(page);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(450, 290, 121, 31));
        btnForgot = new QPushButton(page);
        btnForgot->setObjectName("btnForgot");
        btnForgot->setGeometry(QRect(250, 290, 121, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        btnSave1 = new QPushButton(page_2);
        btnSave1->setObjectName("btnSave1");
        btnSave1->setGeometry(QRect(710, 430, 83, 29));
        btnReset = new QPushButton(page_2);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(590, 430, 83, 29));
        formLayoutWidget_2 = new QWidget(page_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(200, 120, 671, 231));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        txtFirstName = new QLineEdit(formLayoutWidget_2);
        txtFirstName->setObjectName("txtFirstName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName("label_5");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName("label_6");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        txtLastName = new QLineEdit(formLayoutWidget_2);
        txtLastName->setObjectName("txtLastName");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        txtEmail_2 = new QLineEdit(formLayoutWidget_2);
        txtEmail_2->setObjectName("txtEmail_2");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtEmail_2);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_8);

        txtPhone = new QLineEdit(formLayoutWidget_2);
        txtPhone->setObjectName("txtPhone");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, txtPhone);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_9);

        txtPassword_2 = new QLineEdit(formLayoutWidget_2);
        txtPassword_2->setObjectName("txtPassword_2");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, txtPassword_2);

        txtMiddle = new QLineEdit(formLayoutWidget_2);
        txtMiddle->setObjectName("txtMiddle");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtMiddle);

        btnPrev = new QPushButton(page_2);
        btnPrev->setObjectName("btnPrev");
        btnPrev->setGeometry(QRect(480, 430, 83, 29));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        formLayoutWidget_3 = new QWidget(page_4);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(120, 130, 771, 81));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName("label_11");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        txtFEmail = new QLineEdit(formLayoutWidget_3);
        txtFEmail->setObjectName("txtFEmail");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtFEmail);

        txtFPhone = new QLineEdit(formLayoutWidget_3);
        txtFPhone->setObjectName("txtFPhone");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, txtFPhone);

        btnPrev_2 = new QPushButton(page_4);
        btnPrev_2->setObjectName("btnPrev_2");
        btnPrev_2->setGeometry(QRect(270, 300, 83, 29));
        btnNext = new QPushButton(page_4);
        btnNext->setObjectName("btnNext");
        btnNext->setGeometry(QRect(660, 310, 83, 29));
        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(360, 0, 271, 121));
        QFont font2;
        font2.setPointSize(25);
        label_10->setFont(font2);
        btnEnter = new QPushButton(page_3);
        btnEnter->setObjectName("btnEnter");
        btnEnter->setGeometry(QRect(250, 300, 121, 71));
        btnEditexp = new QPushButton(page_3);
        btnEditexp->setObjectName("btnEditexp");
        btnEditexp->setGeometry(QRect(40, 300, 121, 71));
        btnGraph = new QPushButton(page_3);
        btnGraph->setObjectName("btnGraph");
        btnGraph->setGeometry(QRect(660, 300, 131, 71));
        btnStats = new QPushButton(page_3);
        btnStats->setObjectName("btnStats");
        btnStats->setGeometry(QRect(470, 310, 111, 61));
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1051, 25));
        menuHome_Page = new QMenu(menubar);
        menuHome_Page->setObjectName("menuHome_Page");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome_Page->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Mind Your Money ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnSignup->setText(QCoreApplication::translate("MainWindow", "SignUp", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnForgot->setText(QCoreApplication::translate("MainWindow", "ForgotPassword", nullptr));
        btnSave1->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        btnPrev->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        btnPrev_2->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Welcome User", nullptr));
        btnEnter->setText(QCoreApplication::translate("MainWindow", "Enter Expense", nullptr));
        btnEditexp->setText(QCoreApplication::translate("MainWindow", "Edit Expense", nullptr));
        btnGraph->setText(QCoreApplication::translate("MainWindow", "Generate Graph", nullptr));
        btnStats->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        menuHome_Page->setTitle(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
