#ifndef SYSTEMSETTING_H
#define SYSTEMSETTING_H

#include <QTreeWidgetItem>
#include <QMap>
#include "ui_systemsetting.h"
class SystemSetting : public QWidget
{
    Q_OBJECT
public slots:
    void handleItemClicked(QTreeWidgetItem * item,int column);
public:
    explicit SystemSetting(QWidget *parent = 0);

private:
    Ui::SystemSetting ui;
    QMap<QTreeWidgetItem*, int> m_map;

};

#endif // SYSTEMSETTING_H
