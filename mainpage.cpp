#include "mainpage.h"
#include "ui_mainpage.h"
#include "giftpage.h"
#include <QMessageBox>
mainpage::mainpage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mainpage)
{
    ui->setupUi(this);
}

mainpage::~mainpage()
{
    delete ui;
}

void mainpage::on_pushButton_clicked()
{
    QString username =ui->lineEdit->text();
    QString password =ui->lineEdit_2->text();
   //if(username =="test" && password =="test")
    //{
      // QMessageBox::information(this,"login", "code and password is correct");


    //}
   // else {
         //   QMessageBox::warning(this,"login","code and password is not correct");

//}

            Giftpage p;
            p.setModal(true);
            p.exec();


}
