#ifndef GETGIFT_H
#define GETGIFT_H

#include <QDialog>

namespace Ui {
class getgift;
}

class getgift : public QDialog
{
    Q_OBJECT

public:
    explicit getgift(QWidget *parent = nullptr);
    ~getgift();

private:
    Ui::getgift *ui;
};

#endif // GETGIFT_H
