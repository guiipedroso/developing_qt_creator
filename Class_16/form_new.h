#ifndef FORM_NEW_H
#define FORM_NEW_H

#include <QDialog>

namespace Ui {
class form_new;
}

class form_new : public QDialog
{
    Q_OBJECT

public:
    explicit form_new(QWidget *parent = nullptr);
    ~form_new();

private:
    Ui::form_new *ui;
};

#endif // FORM_NEW_H
