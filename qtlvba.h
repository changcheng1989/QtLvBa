#ifndef QTLVBA_H
#define QTLVBA_H

#include <QtGui/QWidget>
#include <QMouseEvent>
#include "ui_qtlvba.h"
#include "feedbackwidget.h"
#include "recoverpassword.h"
#include "passwordcheck3.h"
#include "logview.h"
class QtLvBa : public QWidget
{
	Q_OBJECT

public:
	QtLvBa(QWidget *parent = 0, Qt::WFlags flags = 0);
	~QtLvBa();
public slots:
    void showFeedbackWidget();
    void showRecoverPassword();
    void showLogView();
    void showPasswordCheck3();
private:
	Ui::QtLvBaClass ui;

    FeedbackWidget *feedbackWidget;
    RecoverPassword *recoverPassword;
    LogView *logView;
    PasswordCheck3 *passwordCheck3;

    QPoint move_point; //移动的距离
    bool mouse_press; //鼠标按下
    bool maxNormal;

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void showMaxRestore();
};

#endif // QTLVBA_H
