#include "passwordcheck2.h"

PassWordCheck2::PassWordCheck2(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.pushButton_3,SIGNAL(clicked()),this,SLOT(showScreenLogView()));


}
void PassWordCheck2::showScreenLogView()
{
    if(ui.lineEdit_2->text() == tr("112233"))  //初始化密码为112233
    {
           screenLogView = new ScreenLogView;
           screenLogView->show();
           this->close();
    }
    else
    {
        this->close();
    }
}
