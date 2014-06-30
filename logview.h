#ifndef LOGVIEW_H
#define LOGVIEW_H

#include "ui_logview.h"
#include "passwordcheck.h"
#include "passwordcheck2.h"
#include <QMouseEvent>
class LogView : public QWidget
{
    Q_OBJECT

public:
    explicit LogView(QWidget *parent = 0);
public slots:
    void showPasswordCheck();
    void showPasswordCheck2();
private:
    Ui::LogView ui;
    PassWordCheck *passWordCheck;
    PassWordCheck2 *passWordCheck2;
    QPoint move_point; //移动的距离
    bool mouse_press; //鼠标按下
    bool maxNormal;

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void showMaxRestore();
};

#endif // LOGVIEW_H
