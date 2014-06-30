#include "feedbackwidget.h"

FeedbackWidget::FeedbackWidget(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint /*| Qt::WindowStaysOnTopHint*/);

    QPixmap closePix = style()->standardPixmap(QStyle::SP_TitleBarCloseButton);
    ui.closeButton->setIcon(closePix);
    ui.closeButton->setStyleSheet("background-color:transparent;");
    ui.closeButton->setFocusPolicy(Qt::NoFocus);// 设置关闭按钮图标
    connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui.closeButton,SIGNAL(clicked()),this,SLOT(close()));
    //ui.plainTextEdit->setWordWrapMode(QTextOption::NoWrap);
}
void FeedbackWidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        mouse_press = true;

        //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
        move_point = event->pos();;

    }

}

void FeedbackWidget::mouseMoveEvent(QMouseEvent *event)
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

void FeedbackWidget::mouseReleaseEvent(QMouseEvent *event)
{
    //设置鼠标为未被按下
    mouse_press = false;
}

void FeedbackWidget::showMaxRestore()
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
