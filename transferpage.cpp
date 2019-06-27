#include "transferpage.h"
#include "ui_transferpage.h"
#include <QMessageBox>
transferpage::transferpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transferpage)
{
    ui->setupUi(this);
}

transferpage::~transferpage()
{
    delete ui;
}

void transferpage::on_pushButton_clicked()
{
    QMessageBox::information(this,tr("THE TITLE"),tr("SUCCESSFULLY TRANSFERED"));

}
