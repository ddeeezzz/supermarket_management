#include "mainwindow_userstab.h"
#include "ui_mainwindow_userstab.h"
#include "prosql.h"
#include "dlg_adduser.h"
#include <QMessageBox>

MainWindow_UsersTab::MainWindow_UsersTab(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow_UsersTab)
    ,m_ptrProSql(nullptr)
    ,m_ptradduser(nullptr)
{
    ui->setupUi(this);
    auto* databaseInstance = proSql::getinstance();
    databaseInstance->init();
    m_ptradduser = new Dlg_AddUser(this);
    updateUsersTab();
}

MainWindow_UsersTab::~MainWindow_UsersTab()
{
    delete ui;
}

void MainWindow_UsersTab::on_bin_add_clicked()
{
    UserInfo info;

    m_ptradduser->setType(true, info);
    m_ptradduser->exec();
    updateUsersTab();
}


void MainWindow_UsersTab::on_bin_update_clicked()
{
    UserInfo info;
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        info.username = ui->tableWidget->item(i, 1)->text();
        info.password = ui->tableWidget->item(i, 2)->text();
        info.auth = ui->tableWidget->item(i, 3)->text();

        m_ptradduser->setType(false, info);
        m_ptradduser->exec();
        updateUsersTab();
    }
}


void MainWindow_UsersTab::on_bin_delete_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        QString username = ui->tableWidget->item(i,1)->text();
        m_ptrProSql->delUser(username);
        updateUsersTab();
        QMessageBox::information(nullptr,"信息","删除成功");
    }
}


void MainWindow_UsersTab::on_bin_clear_clicked()
{
    m_ptrProSql->clearProPassingTable();
    updateUsersTab();
}


void MainWindow_UsersTab::on_bin_search_clicked()
{
    QString strFilter = ui->le_search->text();
    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","名称筛选为空");
        updateUsersTab();
        return;
    }

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);
    QStringList l;
    l<<"序号"<<"用户名"<<"密码"<<"权限";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    // 获取水平表头
    QHeaderView *header = ui->tableWidget->horizontalHeader();
    // 设置每列的拉伸模式为Stretch
    header->setSectionResizeMode(QHeaderView::Stretch);

    auto cnt = m_ptrProSql->getAllUser().size();
    ui->lb_cnt->setText(QString("数量：%1").arg(cnt));
    QList<UserInfo> lusers = m_ptrProSql->getAllUser();

    int index = 0;
    for(int i = 0; i < lusers.size(); i++)
    {
        if(!lusers[i].username.contains(strFilter))
        {
            continue;
        }
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(lusers[i].username));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(lusers[i].password));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(lusers[i].auth));
        index++;
    }
    ui->tableWidget->setRowCount(index);
}

void MainWindow_UsersTab::updateUsersTab()
{
     qDebug() << "Updating Users Tab";

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(4);
    QStringList l;
    l<<"序号"<<"用户名"<<"密码"<<"权限";
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

    // 确保 m_ptrProSql 非空
    if (!m_ptrProSql) {
        qWarning() << "m_ptrProSql is null!";
        m_ptrProSql = new proSql(this);
    }

    auto cnt = m_ptrProSql->getAllUser().size();
    QList<UserInfo> lusers = m_ptrProSql->getAllUser();
    ui->lb_cnt->setText(QString("数量：%1").arg(m_ptrProSql->getAllUser().size()));



    qDebug() << "Fetched users:" << lusers.size();

    ui->tableWidget->setRowCount(cnt);

    for(int i = 0; i < lusers.size(); i++)
    {
        qDebug()<<lusers[i].username;
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(lusers[i].username));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(lusers[i].password));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(lusers[i].auth));
    }
    qDebug() << "Users Tab updated successfully";
}

