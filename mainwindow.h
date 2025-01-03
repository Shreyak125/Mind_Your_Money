#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnLogin_clicked();

    void on_btnSignup_clicked();

    void on_btnForgot_clicked();

    void on_pushButton_4_clicked();

    void on_btnPrev_clicked();

    void on_btnPrev_2_clicked();

    void on_btnSave1_clicked();


private slots:
    void updateDateTime();
    void on_btnEPrev_clicked();

    void on_btnEnter_clicked();

    void on_btnHome_clicked();

    void on_btnNext_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
