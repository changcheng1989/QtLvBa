#include "passwordcheck.h"

PassWordCheck::PassWordCheck(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(showTextLogView()));


}
void PassWordCheck::showTextLogView()
{
    if(ui.lineEdit->text() == tr("112233"))  //初始化密码为112233
    {
           textLogView = new TextLogView;
           textLogView->show();
           this->close();
    }
    else
    {
        this->close();
    }
}
