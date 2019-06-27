#ifndef GIFTPAGE_H
#define GIFTPAGE_H

#include <QDialog>
#include "transferpage.h"
namespace Ui {
class Giftpage;
}

class Giftpage : public QDialog
{
    Q_OBJECT

public:
    explicit Giftpage(QWidget *parent = nullptr);
    ~Giftpage();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::Giftpage *ui;
};

#endif // GIFTPAGE_H
