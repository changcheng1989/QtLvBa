#ifndef SCREENLOGVIEW_H
#define SCREENLOGVIEW_H

#include "ui_screenlogview.h"

class ScreenLogView : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenLogView(QWidget *parent = 0);

private:
    Ui::ScreenLogView ui;
};

#endif // SCREENLOGVIEW_H
