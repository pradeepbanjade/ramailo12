#ifndef POINTSTRANSFERRED_H
#define POINTSTRANSFERRED_H

#include <QDialog>

namespace Ui {
class pointstransferred;
}

class pointstransferred : public QDialog
{
    Q_OBJECT

public:
    explicit pointstransferred(QWidget *parent = nullptr);
    ~pointstransferred();

private:
    Ui::pointstransferred *ui;
};

#endif // POINTSTRANSFERRED_H
