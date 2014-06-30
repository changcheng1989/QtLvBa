#include "qtlvba.h"

QtLvBa::QtLvBa(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint /*| Qt::WindowStaysOnTopHint*/);
    connect(ui.pushButton_6,SIGNAL(clicked()),this,SLOT(close()));        //关闭按钮
    connect(ui.pushButton_7,SIGNAL(clicked()),this,SLOT(showMinimized())); //最小化按钮

    connect(ui.pushButton,SIGNAL(clicked()),this,SLOT(showFeedbackWidget()));
    connect(ui.pushButton_5,SIGNAL(clicked()),this,SLOT(showRecoverPassword()));
    connect(ui.pushButton_2,SIGNAL(clicked()),this,SLOT(showLogView()));
}

QtLvBa::~QtLvBa()
{

}
void QtLvBa::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        mouse_press = true;

        //鼠标相对于窗体的位置（或者使用event->globalPos() - this->pos()）
        move_point = event->pos();;

    }

}

void QtLvBa::mouseMoveEvent(QMouseEvent *event)
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

void QtLvBa::mouseReleaseEvent(QMouseEvent *event)
{
    //设置鼠标为未被按下
    mouse_press = false;
}

void QtLvBa::showMaxRestore()
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
void QtLvBa::showFeedbackWidget()
{
    feedbackWidget = new FeedbackWidget;
    feedbackWidget->show();
}
void QtLvBa::showRecoverPassword()
{
    recoverPassword = new RecoverPassword;
    recoverPassword->show();
}

void QtLvBa::showLogView()
{
    logView = new LogView;
    logView->show();
}
