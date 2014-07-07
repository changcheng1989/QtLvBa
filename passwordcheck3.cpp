#include "passwordcheck3.h"

PasswordCheck3::PasswordCheck3(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(showSystemSetting()));
}
void PasswordCheck3::showSystemSetting()
{

    if(ui.lineEdit->text() == tr("112233"))
    {
        systemSetting = new SystemSetting;
        systemSetting->show();
    }
    else
    {
        this->close();
    }
}
