#ifndef SYSTEMSETTING_H
#define SYSTEMSETTING_H

#include "ui_systemsetting.h"

class SystemSetting : public QWidget
{
    Q_OBJECT

public:
    explicit SystemSetting(QWidget *parent = 0);

private:
    Ui::SystemSetting ui;
};

#endif // SYSTEMSETTING_H
