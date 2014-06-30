#ifndef TEXTLOGVIEW_H
#define TEXTLOGVIEW_H

#include "ui_textlogview.h"

class TextLogView : public QWidget
{
    Q_OBJECT

public:
    explicit TextLogView(QWidget *parent = 0);

private:
    Ui::TextLogView ui;
};

#endif // TEXTLOGVIEW_H
