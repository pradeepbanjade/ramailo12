#include "getgift.h"
#include "ui_getgift.h"

getgift::getgift(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::getgift)
{
    ui->setupUi(this);
}

getgift::~getgift()
{
    delete ui;
}
