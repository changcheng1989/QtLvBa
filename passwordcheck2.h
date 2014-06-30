#ifndef PASSWORDCHECK2_H
#define PASSWORDCHECK2_H

#include "ui_passwordcheck2.h"
#include "screenlogview.h"
#include <QString>
class PassWordCheck2 : public QWidget
{
    Q_OBJECT

public:
    explicit PassWordCheck2(QWidget *parent = 0);
public slots:
    void showScreenLogView();
private:
    Ui::PassWordCheck2 ui;
    ScreenLogView *screenLogView;
};

#endif // PASSWORDCHECK2_H
