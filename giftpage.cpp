#include "giftpage.h"
#include "ui_giftpage.h"
#include "transferpage.h"
Giftpage::Giftpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Giftpage)
{
    ui->setupUi(this);
}

Giftpage::~Giftpage()
{
    delete ui;
}

void Giftpage::on_pushButton_5_clicked()
{
    this->hide();
    transferpage t;
    t.setModal(true);
    t.exec();

}
