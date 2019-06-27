#ifndef TRANSFERPAGE_H
#define TRANSFERPAGE_H

#include <QDialog>

namespace Ui {
class transferpage;
}

class transferpage : public QDialog
{
    Q_OBJECT

public:
    explicit transferpage(QWidget *parent = nullptr);
    ~transferpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::transferpage *ui;
};

#endif // TRANSFERPAGE_H
