#ifndef FEEDBACKWIDGET_H
#define FEEDBACKWIDGET_H

#include "ui_feedbackwidget.h"

class FeedbackWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FeedbackWidget(QWidget *parent = 0);

private:
    Ui::FeedbackWidget ui;


    QPoint move_point; //移动的距离
    bool mouse_press; //鼠标按下
    bool maxNormal;


    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void showMaxRestore();
};

#endif // FEEDBACKWIDGET_H
