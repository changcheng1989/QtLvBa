#include "logview.h"

LogView::LogView(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint /*| Qt::WindowStaysOnTopHint*/);
    QPixmap closePix = style()->standardPixmap(QStyle::SP_TitleBarCloseButton);
    ui.closeButton->setIcon(closePix);
    ui.closeButton->setStyleSheet("background-color:transparent;");
    ui.closeButton->setFocusPolicy(Qt::NoFocus);// 设置关闭按钮图标
    connect(ui.closeButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(showPasswordCheck()));
    connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(showPasswordCheck2()));
}
void LogView::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        mouse_press = true;

        //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
        move_point = event->pos();;

    }

}

void LogView::mouseMoveEvent(QMouseEvent *event)
{
    //若鼠标左键被按下
    if(mouse_press)
    {
        //鼠标相对于屏幕的位置
        QPoint move_pos = event->globalPos();

        //移动主窗体位置
        this->move(move_pos - move_point);
    }

}

void LogView::mouseReleaseEvent(QMouseEvent *event)
{
    //设置鼠标为未被按下
    mouse_press = false;
}

void LogView::showMaxRestore()
{

    if (maxNormal) {

        /*ui.maxButton->setIcon(maxPix);  */
        this->showNormal();

        maxNormal = !maxNormal;



    }

    else {

        /*ui.maxButton->setIcon(restorePix);*/
        this->showMaximized();

        maxNormal = !maxNormal;



    }

}
void LogView::showPasswordCheck()
{
    passWordCheck = new PassWordCheck;
    passWordCheck->show();
}
void LogView::showPasswordCheck2()
{
    passWordCheck2 = new PassWordCheck2;
    passWordCheck2->show();
}
