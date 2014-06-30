#ifndef PASSWORDCHECK_H
#define PASSWORDCHECK_H

#include "ui_passwordcheck.h"
#include "textlogview.h"
#include <QString>
class PassWordCheck : public QWidget
{
    Q_OBJECT

public:
    explicit PassWordCheck(QWidget *parent = 0);
public slots:
    void showTextLogView();
private:
    Ui::PassWordCheck ui;
    QString password;
    TextLogView *textLogView;

};

#endif // PASSWORDCHECK_H
