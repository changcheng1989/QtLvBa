#ifndef PASSWORDCHECK3_H
#define PASSWORDCHECK3_H

#include "ui_passwordcheck3.h"
#include "systemsetting.h"
class PasswordCheck3 : public QWidget
{
    Q_OBJECT

public:
    explicit PasswordCheck3(QWidget *parent = 0);
public slots:
    void showSystemSetting();
private:
    Ui::PasswordCheck3 ui;
    SystemSetting * systemSetting;
};

#endif // PASSWORDCHECK3_H
