#ifndef RECOVERPASSWORD_H
#define RECOVERPASSWORD_H

#include "ui_recoverpassword.h"
#include <QMouseEvent>
class RecoverPassword : public QWidget
{
    Q_OBJECT

public:
    explicit RecoverPassword(QWidget *parent = 0);

private:
    Ui::RecoverPassword ui;

    QPoint move_point; //移动的距离
    bool mouse_press; //鼠标按下
    bool maxNormal;

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void showMaxRestore();


};

#endif // RECOVERPASSWORD_H
