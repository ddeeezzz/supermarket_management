#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QKeyEvent>
#include <QFile>
#include <QCoreApplication>
#include <QRandomGenerator>
#include <QMessageBox>
#include "page_personalcenter.h"
#include "mainwindow_ispass.h"
#include "mainwindow_userstab.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,m_ptrProSql(nullptr)
    , m_personalCenter(nullptr)
    , m_mainwindow_ispass(nullptr)
    , m_mainwindow_userstab(nullptr)
{
    ui->setupUi(this);

    m_dlgLogin.show();

    connect(&m_dlgLogin, &Page_Lolgin::sendLoginSuccess, this, &MainWindow::handleLoginSuccess);
    connect(ui->treeWidget, &QTreeWidget::itemClicked, this, &MainWindow::onTreeWidgetItemClicked);

    ui->stackedWidget->setCurrentIndex(0);
    m_ptrProSql = proSql::getinstance();
    updateTable();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_F6)
    {
        QFile f;
        auto str = QCoreApplication::applicationDirPath();
        f.setFileName(str+"//"+"proqss.css");
        f.open(QIODevice::ReadOnly);
        QString strQss = f.readAll();
        this->setStyleSheet(strQss);
        m_dlgLogin.setStyleSheet(strQss);
    }
}

void MainWindow::onTreeWidgetItemClicked(QTreeWidgetItem *item, int column) {
    if (item->text(column) == "个人中心") {
        m_personalCenter->exec();
    }
    if (item->text(column) == "订单审批") {
        m_mainwindow_ispass->show();
    }
    if (item->text(column) == "用户管理") {
        m_mainwindow_userstab->show();
    }
    if (item->text(column) == "采购商品") {
        m_mainwindow_ispass->show();
        // hidePurchaseButton();
    }
}

void MainWindow::hidePurchaseButton()
{
    m_mainwindow_ispass->ui_1->btn_pass->hide();
}

void MainWindow::on_bin_exit_clicked()
{
    this->hide();
}

void MainWindow::handleLoginSuccess(const QString &username, const QString &password, const QString &auth)
{

    // 更新 lb_username 标签的文本
    ui->lb_username->setText("用户名：" + username);
    // 延迟初始化
    m_personalCenter = new Page_PersonalCenter(this);
    m_personalCenter->setUserInfo(username, password, auth);

    m_mainwindow_ispass = new MainWindow_IsPass(this);
    m_mainwindow_userstab = new MainWindow_UsersTab(this);

    //m_mainwindow_ispass->setUserInfo(username, password, auth);

    // 根据权限信息执行相应操作，例如显示不同的界面或启用/禁用某些功能
    ui->bin_add->show();
    ui->bin_clear->show();
    ui->bin_delete->show();
    ui->bin_simulation->show();
    ui->bin_update->show();
    if(auth == "other")
    {
        ui->bin_add->hide();
        ui->bin_clear->hide();
        ui->bin_delete->hide();
        ui->bin_simulation->hide();
        ui->bin_update->hide();
    }
    if(auth == "buyer")
    {
        ui->bin_clear->hide();
        ui->bin_simulation->hide();
    }

    this->show();
    updateTree(auth);
}


void MainWindow::on_bin_simulation_clicked()
{
    //QStringList l;
    //制作1000条商品数据
    QRandomGenerator g,c;
    g.seed(0);
    c.seed(0);

    QList<ProInfo> l;
    for(int i = 0;i < 213; i++)
    {
        auto count = g.bounded(7,10);
        auto price = g.bounded(7,10)*1.0;
        ProInfo info;
        if(i%3==0)
        {
            info.name = QString("手里剑%1").arg(i+1);
        }

        if(i%3==1)
        {
            info.name = QString("起爆符%1").arg(i+1);
        }
        if(i%3==2)
        {
            info.name = QString("苦无%1").arg(i+1);
        }
        info.count = count;
        info.price = price;
        info.proid = QString("NARUTO%1").arg(i+1);
        info.type = QString("忍具");
        l.append(info);

    }
    m_ptrProSql->addPro(l);
    updateTable();
}


void MainWindow::on_bin_add_clicked()
{
    ProInfo info;
    info.price = 0;
    info.count = 0;

    m_dlgAddPro.setType(true, info);
    m_dlgAddPro.exec();

    updateTable();

}


void MainWindow::on_bin_clear_clicked()
{
    m_ptrProSql->clearProTable();
    updateTable();
}


void MainWindow::updateTable()
{

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"id"<<"编码"<<"名称"<<"类型"<<"价格"<<"库存";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    // 获取水平表头
    QHeaderView *header = ui->tableWidget->horizontalHeader();
    // 设置每列的拉伸模式为Stretch
    header->setSectionResizeMode(QHeaderView::Stretch);
    //只选中行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    //只能选中单行
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    //不可编辑
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    auto cnt = m_ptrProSql->getProCnt();
    ui->lb_cnt->setText(QString("数量：%1").arg(cnt));
    QList<ProInfo> lProducts = m_ptrProSql->getPagePro(0,cnt);

    ui->tableWidget->setRowCount(cnt);
    for(int i = 0; i < lProducts.size(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(lProducts[i].id)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(lProducts[i].proid));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(lProducts[i].name));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(lProducts[i].type));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(lProducts[i].price)));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(lProducts[i].count)));
    }

    // 隐藏指定列
    ui->tableWidget->setColumnHidden(1, true);
}


void MainWindow::disableTreeWidgetItem(QTreeWidgetItem* item)
{
    QFont font = item->font(0);
    font.setItalic(true);
    item->setFont(0, font);
    item->setForeground(0, Qt::gray);

    ui->treeWidget->collapseItem(item);

    for (int i = 0; i < item->childCount(); ++i) {
        disableTreeWidgetItem(item->child(i));
    }

    // 禁用项目，使其无法被点击
    item->setFlags(item->flags() & ~Qt::ItemIsSelectable & ~Qt::ItemIsEnabled);
    item->setHidden(true);
}


void MainWindow::updateTree(const QString &auth)
{
    ui->treeWidget->clear();
    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l<<"超市商品信息管理系统";

    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget, l);
    ui->treeWidget->addTopLevelItem(pf);

    l.clear();
    l<<"管理员";
    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf, l);

    l.clear();
    l<<"采购员";
    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf, l);

    l.clear();
    l<<"其他用户";
    QTreeWidgetItem *p3 = new QTreeWidgetItem(pf, l);


    l.clear();
    l<<"个人中心";
    QTreeWidgetItem *p1_1 = new QTreeWidgetItem(p1, l);

    l.clear();
    l<<"订单审批";
    QTreeWidgetItem *p1_2 = new QTreeWidgetItem(p1, l);

    l.clear();
    l<<"用户管理";
    QTreeWidgetItem *p1_3 = new QTreeWidgetItem(p1, l);

    l.clear();
    l<<"个人中心";
    QTreeWidgetItem *p2_1 = new QTreeWidgetItem(p2, l);

    l.clear();
    l<<"采购商品";
    QTreeWidgetItem *p2_2 = new QTreeWidgetItem(p2, l);

    l.clear();
    l<<"个人中心";
    QTreeWidgetItem *p3_1 = new QTreeWidgetItem(p3, l);

    pf->addChild(p1);
    pf->addChild(p2);
    pf->addChild(p3);
    p1->addChild(p1_1);
    p1->addChild(p1_2);
    p1->addChild(p1_3);
    p2->addChild(p2_1);
    p2->addChild(p2_2);
    p3->addChild(p3_1);

    ui->treeWidget->expandAll();

    if (auth == "admin") {
        disableTreeWidgetItem(p2);
        disableTreeWidgetItem(p3);
    } else if (auth == "buyer") {
        disableTreeWidgetItem(p1);
        disableTreeWidgetItem(p3);
    } else if (auth == "other") {
        disableTreeWidgetItem(p1);
        disableTreeWidgetItem(p2);
    }

}


void MainWindow::on_bin_delete_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        int id = ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrProSql->delPro(id);
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功");
    }
}


void MainWindow::on_bin_update_clicked()
{
    ProInfo info;
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        info.id = ui->tableWidget->item(i, 1)->text().toUInt();
        info.proid = ui->tableWidget->item(i, 2)->text();
        info.name = ui->tableWidget->item(i, 3)->text();
        info.type = ui->tableWidget->item(i, 4)->text();
        info.price = ui->tableWidget->item(i, 5)->text().toDouble();
        info.count = ui->tableWidget->item(i, 6)->text().toUInt();

        m_dlgAddPro.setType(false, info);
        m_dlgAddPro.exec();
        updateTable();
    }
}


void MainWindow::on_bin_search_clicked()
{
    QString strFilter = ui->le_search->text();
    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","名称筛选为空");
        updateTable();
        return;
    }

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"id"<<"编码"<<"名称"<<"类型"<<"价格"<<"库存";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    // 获取水平表头
    QHeaderView *header = ui->tableWidget->horizontalHeader();
    // 设置每列的拉伸模式为Stretch
    header->setSectionResizeMode(QHeaderView::Stretch);



    // auto delegate = new HoveredRowItemDelegate(ui->tableWidget);
    // ui->tableWidget->setItemDelegate(delegate);

    auto cnt = m_ptrProSql->getProCnt();
    QList<ProInfo> lProducts = m_ptrProSql->getPagePro(0,cnt);
    ui->lb_cnt->setText(QString("总数：%1").arg(cnt));

    int index = 0;
    for(int i = 0; i < lProducts.size(); i++)
    {
        if(!lProducts[i].name.contains(strFilter))
        {
            continue;
        }
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(QString::number(lProducts[i].id)));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(lProducts[i].proid));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(lProducts[i].name));
        ui->tableWidget->setItem(index, 4, new QTableWidgetItem(lProducts[i].type));
        ui->tableWidget->setItem(index, 5, new QTableWidgetItem(QString::number(lProducts[i].price)));
        ui->tableWidget->setItem(index, 6, new QTableWidgetItem(QString::number(lProducts[i].count)));
        index++;
    }
    ui->tableWidget->setRowCount(index);
}


