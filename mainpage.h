#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <giftpage.h>
namespace Ui {
class mainpage;
}

class mainpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);
    ~mainpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mainpage *ui;
};

#endif // MAINPAGE_H
