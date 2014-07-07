#include "systemsetting.h"

SystemSetting::SystemSetting(QWidget *parent) :
    QWidget(parent)
{
    ui.setupUi(this);

    QList<QTreeWidgetItem *> rootList;
    QIcon icon;
    icon.addPixmap(QPixmap(":/QtLvBa/folder-blue.png"), QIcon::Normal, QIcon::On);//节点打开状态
    icon.addPixmap(QPixmap(":/QtLvBa/folder-red.png"), QIcon::Normal, QIcon::Off);//节点关闭状态

    QTreeWidgetItem *imageItem1 = new QTreeWidgetItem;   //添加第一个父节点
    imageItem1->setText(0,tr("系统设置"));
    imageItem1->setIcon(0,QIcon(":/QtLvBa/preferences-system-4.png"));
    rootList.append(imageItem1);

    QTreeWidgetItem *imageItem1_1 = new QTreeWidgetItem(imageItem1,QStringList(tr("总控开关"))); //添加子节点
    imageItem1_1->setIcon(0,icon);
    imageItem1->addChild(imageItem1_1);

    QTreeWidgetItem *imageItem1_2 = new QTreeWidgetItem(imageItem1,QStringList(tr("图像拦截"))); //添加子节点
    imageItem1_2->setIcon(0,icon);
    imageItem1->addChild(imageItem1_2);

    QTreeWidgetItem *imageItem1_3 = new QTreeWidgetItem(imageItem1,QStringList(tr("文字过滤"))); //添加子节点
    imageItem1_3->setIcon(0,icon);
    imageItem1->addChild(imageItem1_3);

    QTreeWidgetItem *imageItem1_4 = new QTreeWidgetItem(imageItem1,QStringList(tr("时间控制"))); //添加子节点
    imageItem1_4->setIcon(0,icon);
    imageItem1->addChild(imageItem1_4);

    QTreeWidgetItem *imageItem1_5 = new QTreeWidgetItem(imageItem1,QStringList(tr("网址过滤"))); //添加子节点
    imageItem1_5->setIcon(0,icon);
    imageItem1->addChild(imageItem1_5);

    QTreeWidgetItem *imageItem2 = new QTreeWidgetItem;   //添加第二个父节点
    imageItem2->setText(0,tr("个性参数"));
    imageItem2->setIcon(0,QIcon(":/QtLvBa/preferences-system-4.png"));
    rootList.append(imageItem2);

    QTreeWidgetItem *imageItem2_1 = new QTreeWidgetItem(imageItem2,QStringList(tr("内容选择")));  //添加子节点
    imageItem2_1->setIcon(0,icon);
    imageItem2->addChild(imageItem2_1);

    QTreeWidgetItem *imageItem2_2 = new QTreeWidgetItem(imageItem2,QStringList(tr("个人定制")));  //添加子节点
    imageItem2_2->setIcon(0,icon);
    imageItem2->addChild(imageItem2_2);

    QTreeWidgetItem *imageItem2_3 = new QTreeWidgetItem(imageItem2,QStringList(tr("日志设定")));  //添加子节点
    imageItem2_3->setIcon(0,icon);
    imageItem2->addChild(imageItem2_3);


    QTreeWidgetItem *imageItem3 = new QTreeWidgetItem;   //添加第三个父节点
    imageItem3->setText(0,tr("个性参数"));
    imageItem3->setIcon(0,QIcon(":/QtLvBa/preferences-system-4.png"));
    rootList.append(imageItem3);

    QTreeWidgetItem *imageItem3_1 = new QTreeWidgetItem(imageItem3,QStringList(tr("注册/升级")));  //添加子节点
    imageItem3_1->setIcon(0,icon);
    imageItem3->addChild(imageItem3_1);

    QTreeWidgetItem *imageItem3_2 = new QTreeWidgetItem(imageItem3,QStringList(tr("密码/卸载")));  //添加子节点
    imageItem3_2->setIcon(0,icon);
    imageItem3->addChild(imageItem3_2);

    QTreeWidgetItem *imageItem3_3 = new QTreeWidgetItem(imageItem3,QStringList(tr("界面/帮助")));  //添加子节点
    imageItem3_3->setIcon(0,icon);
    imageItem3->addChild(imageItem3_3);

    QTreeWidgetItem *imageItem3_4 = new QTreeWidgetItem(imageItem3,QStringList(tr("网络修复")));  //添加子节点
    imageItem3_4->setIcon(0,icon);
    imageItem3->addChild(imageItem3_4);


    ui.treeWidget->insertTopLevelItems(0,rootList);  //将结点插入部件中
    ui.treeWidget->setHeaderHidden(true);
    ui.treeWidget->header()->setSortIndicatorShown(false);
    ui.treeWidget->expandAll(); //全部展开



    m_map[imageItem1] = 0;
    m_map[imageItem1_1] = 1;
    m_map[imageItem1_2] = 2;
    m_map[imageItem1_3] = 3;
    m_map[imageItem1_4] = 4;
    m_map[imageItem1_5] = 5;


    m_map[imageItem2] = 6;
    m_map[imageItem2_1] = 7;
    m_map[imageItem2_2] = 8;
    m_map[imageItem2_3] = 9;

    m_map[imageItem3] = 10;
    m_map[imageItem3_1] = 11;
    m_map[imageItem3_2] = 12;
    m_map[imageItem3_3] = 13;
    m_map[imageItem3_4] = 14;

   connect(ui.treeWidget,SIGNAL(itemClicked(QTreeWidgetItem * ,int)),this,SLOT(handleItemClicked(QTreeWidgetItem * ,int)));








   ui.tableWidget->setRowCount(7);
   ui.tableWidget->setColumnCount(24);
   QStringList hHeader;
   for(int i=0;i<25;i++)
   {
       hHeader<<tr("%1").arg(i);
   }
   ui.tableWidget->setHorizontalHeaderLabels(hHeader);

   QStringList vHeader;
   vHeader<<tr("星期一")<<tr("星期二")<<tr("星期三")<<tr("星期四")<<tr("星期五")<<tr("星期六")<<tr("星期日");
   ui.tableWidget->setVerticalHeaderLabels(vHeader);

   ui.tableWidget->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
   ui.tableWidget->verticalHeader()->setResizeMode(QHeaderView::Stretch);






}
void SystemSetting::handleItemClicked(QTreeWidgetItem * item,int column)
{
     int pageIndex = m_map[item];
     ui.stackedWidget->setCurrentIndex(pageIndex);

}
