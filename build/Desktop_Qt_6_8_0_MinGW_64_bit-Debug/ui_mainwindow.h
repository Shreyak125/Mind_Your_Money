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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSignup;
    QPushButton *btnLogin;
    QPushButton *btnForgot;
    QWidget *page_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
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
    QLineEdit *txtFirstName;
    QLabel *label_14;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPrev;
    QPushButton *btnReset;
    QPushButton *btnSave1;
    QWidget *page_4;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QLineEdit *txtFEmail;
    QLineEdit *txtFPhone;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnPrev_2;
    QPushButton *btnNext;
    QWidget *page_3;
    QLabel *label_10;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnGraph;
    QPushButton *btnStats;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnEnter;
    QPushButton *btnEditexp;
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
        stackedWidget->setGeometry(QRect(10, 10, 1021, 651));
        QFont font;
        font.setPointSize(15);
        stackedWidget->setFont(font);
        stackedWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 10, 341, 101));
        QFont font1;
        font1.setPointSize(25);
        label->setFont(font1);
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(260, 180, 531, 91));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txtEmail = new QLineEdit(formLayoutWidget);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, txtEmail);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txtPassword = new QLineEdit(formLayoutWidget);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, txtPassword);

        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(260, 290, 521, 44));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnSignup = new QPushButton(horizontalLayoutWidget);
        btnSignup->setObjectName("btnSignup");

        horizontalLayout->addWidget(btnSignup);

        btnLogin = new QPushButton(horizontalLayoutWidget);
        btnLogin->setObjectName("btnLogin");

        horizontalLayout->addWidget(btnLogin);

        btnForgot = new QPushButton(horizontalLayoutWidget);
        btnForgot->setObjectName("btnForgot");

        horizontalLayout->addWidget(btnForgot);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        formLayoutWidget_2 = new QWidget(page_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(200, 120, 671, 283));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget_2);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(formLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        txtLastName = new QLineEdit(formLayoutWidget_2);
        txtLastName->setObjectName("txtLastName");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, txtLastName);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        txtEmail_2 = new QLineEdit(formLayoutWidget_2);
        txtEmail_2->setObjectName("txtEmail_2");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, txtEmail_2);

        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_8);

        txtPhone = new QLineEdit(formLayoutWidget_2);
        txtPhone->setObjectName("txtPhone");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, txtPhone);

        label_9 = new QLabel(formLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_9);

        txtPassword_2 = new QLineEdit(formLayoutWidget_2);
        txtPassword_2->setObjectName("txtPassword_2");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, txtPassword_2);

        txtMiddle = new QLineEdit(formLayoutWidget_2);
        txtMiddle->setObjectName("txtMiddle");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txtMiddle);

        txtFirstName = new QLineEdit(formLayoutWidget_2);
        txtFirstName->setObjectName("txtFirstName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txtFirstName);

        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(420, 0, 241, 81));
        label_14->setFont(font1);
        horizontalLayoutWidget_2 = new QWidget(page_2);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(200, 420, 651, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnPrev = new QPushButton(horizontalLayoutWidget_2);
        btnPrev->setObjectName("btnPrev");

        horizontalLayout_2->addWidget(btnPrev);

        btnReset = new QPushButton(horizontalLayoutWidget_2);
        btnReset->setObjectName("btnReset");

        horizontalLayout_2->addWidget(btnReset);

        btnSave1 = new QPushButton(horizontalLayoutWidget_2);
        btnSave1->setObjectName("btnSave1");

        horizontalLayout_2->addWidget(btnSave1);

        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        formLayoutWidget_3 = new QWidget(page_4);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(130, 140, 771, 91));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        txtFEmail = new QLineEdit(formLayoutWidget_3);
        txtFEmail->setObjectName("txtFEmail");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txtFEmail);

        txtFPhone = new QLineEdit(formLayoutWidget_3);
        txtFPhone->setObjectName("txtFPhone");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, txtFPhone);

        label_11 = new QLabel(formLayoutWidget_3);
        label_11->setObjectName("label_11");
        label_11->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_11);

        label_12 = new QLabel(formLayoutWidget_3);
        label_12->setObjectName("label_12");
        label_12->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_4);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(370, 10, 321, 81));
        label_13->setFont(font1);
        horizontalLayoutWidget_3 = new QWidget(page_4);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(520, 280, 391, 80));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btnPrev_2 = new QPushButton(horizontalLayoutWidget_3);
        btnPrev_2->setObjectName("btnPrev_2");

        horizontalLayout_3->addWidget(btnPrev_2);

        btnNext = new QPushButton(horizontalLayoutWidget_3);
        btnNext->setObjectName("btnNext");

        horizontalLayout_3->addWidget(btnNext);

        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_10 = new QLabel(page_3);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(360, 0, 271, 121));
        label_10->setFont(font1);
        verticalLayoutWidget = new QWidget(page_3);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(300, 200, 186, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnGraph = new QPushButton(verticalLayoutWidget);
        btnGraph->setObjectName("btnGraph");

        verticalLayout->addWidget(btnGraph);

        btnStats = new QPushButton(verticalLayoutWidget);
        btnStats->setObjectName("btnStats");

        verticalLayout->addWidget(btnStats);

        verticalLayoutWidget_2 = new QWidget(page_3);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(30, 200, 171, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnEnter = new QPushButton(verticalLayoutWidget_2);
        btnEnter->setObjectName("btnEnter");

        verticalLayout_2->addWidget(btnEnter);

        btnEditexp = new QPushButton(verticalLayoutWidget_2);
        btnEditexp->setObjectName("btnEditexp");

        verticalLayout_2->addWidget(btnEditexp);

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

        stackedWidget->setCurrentIndex(1);


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
        label_4->setText(QCoreApplication::translate("MainWindow", "First Name", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Middle Name", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Last Name", nullptr));
        txtLastName->setPlaceholderText(QCoreApplication::translate("MainWindow", "EG: NEPAL", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Email Address", nullptr));
        txtEmail_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "xyz@gmail.com", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Phone Number", nullptr));
        txtPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "98000000000", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txtPassword_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "CANT BE EMPTY", nullptr));
        txtMiddle->setPlaceholderText(QCoreApplication::translate("MainWindow", "BAHADUR", nullptr));
        txtFirstName->setPlaceholderText(QCoreApplication::translate("MainWindow", "EG: JOHN", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "SignUP Page", nullptr));
        btnPrev->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        btnReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btnSave1->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        txtFEmail->setText(QString());
        txtFEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "XYZ@gmail.com", nullptr));
        txtFPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "9700000000", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Phone", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Forgot Password", nullptr));
        btnPrev_2->setText(QCoreApplication::translate("MainWindow", "Prev", nullptr));
        btnNext->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Welcome User", nullptr));
        btnGraph->setText(QCoreApplication::translate("MainWindow", "Generate Graph", nullptr));
        btnStats->setText(QCoreApplication::translate("MainWindow", "Stats", nullptr));
        btnEnter->setText(QCoreApplication::translate("MainWindow", "Enter Expense", nullptr));
        btnEditexp->setText(QCoreApplication::translate("MainWindow", "Edit Expense", nullptr));
        menuHome_Page->setTitle(QCoreApplication::translate("MainWindow", "Home Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
