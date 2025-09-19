#include "mainwindow_ispass.h"
#include "ui_mainwindow_ispass.h"
#include "prosql.h"
#include <QMessageBox>
#include "page_lolgin.h"


MainWindow_IsPass::MainWindow_IsPass(QWidget *parent)
    : QMainWindow(parent)
    , ui_1(new Ui::MainWindow_IsPass)
    , ui(new Ui::MainWindow_IsPass)
    ,m_ptrProSql(nullptr)
{
    ui->setupUi(this);
    updateTablePassing();
}

MainWindow_IsPass::~MainWindow_IsPass()
{
    delete ui;
}

void MainWindow_IsPass::on_bin_add_clicked()
{
    ProPassingInfo info;
    info.unit_price = 0;
    info.count = 0;

    m_dlgaddpropassing.setType(true, info);
    m_dlgaddpropassing.exec();

    updateTablePassing();
}


void MainWindow_IsPass::on_bin_update_clicked()
{
    ProPassingInfo info;
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        info.id = ui->tableWidget->item(i, 1)->text().toUInt();
        info.proid = ui->tableWidget->item(i, 2)->text();
        info.name = ui->tableWidget->item(i, 3)->text();
        info.type = ui->tableWidget->item(i, 4)->text();
        info.unit_price = ui->tableWidget->item(i, 5)->text().toDouble();
        info.count = ui->tableWidget->item(i, 6)->text().toUInt();
        m_dlgaddpropassing.setType(false, info);
        m_dlgaddpropassing.exec();
        updateTablePassing();
    }
}


void MainWindow_IsPass::on_bin_delete_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        int id = ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrProSql->delProPassing(id);
        updateTablePassing();
        QMessageBox::information(nullptr,"信息","删除成功");
    }
}


void MainWindow_IsPass::on_bin_search_clicked()
{
    QString strFilter = ui->le_search->text();
    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","名称筛选为空");
        updateTablePassing();
        return;
    }

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(7);
    QStringList l;
    l<<"序号"<<"编码"<<"名称"<<"类型"<<"单价"<<"数量"<<"总价";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    // 获取水平表头
    QHeaderView *header = ui->tableWidget->horizontalHeader();
    // 设置每列的拉伸模式为Stretch
    header->setSectionResizeMode(QHeaderView::Stretch);

    auto cnt = m_ptrProSql->getProPassingCnt();
    ui->lb_cnt->setText(QString("数量：%1").arg(cnt));
    QList<ProPassingInfo> lProducts = m_ptrProSql->getPageProPassing(0,cnt);

    int index = 0;
    for(int i = 0; i < lProducts.size(); i++)
    {
        if(!lProducts[i].name.contains(strFilter))
        {
            continue;
        }
        ui->tableWidget->setItem(index, 0, new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index, 1, new QTableWidgetItem(lProducts[i].proid));
        ui->tableWidget->setItem(index, 2, new QTableWidgetItem(lProducts[i].name));
        ui->tableWidget->setItem(index, 3, new QTableWidgetItem(lProducts[i].type));
        ui->tableWidget->setItem(index, 4, new QTableWidgetItem(QString::number(lProducts[i].unit_price)));
        ui->tableWidget->setItem(index, 5, new QTableWidgetItem(QString::number(lProducts[i].count)));
        ui->tableWidget->setItem(index, 6, new QTableWidgetItem(QString::number(lProducts[i].total_price)));
        index++;
    }
    ui->tableWidget->setRowCount(index);

}


void MainWindow_IsPass::on_bin_clear_clicked()
{
    m_ptrProSql->clearProPassingTable();
    updateTablePassing();
}

void MainWindow_IsPass::on_btn_pass_clicked()
{

        int i = ui->tableWidget->currentRow();
        if(i>=0)
        {
            int id = ui->tableWidget->item(i,1)->text().toUInt();
            m_ptrProSql->delProPassing(id);
            updateTablePassing();
            QMessageBox::information(nullptr,"信息","已通过");
        }

}


void MainWindow_IsPass::updateTablePassing()
{

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(8);
    QStringList l;
    l<<"序号"<<"id"<<"编码"<<"名称"<<"类型"<<"单价"<<"数量"<<"总价";
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

    auto cnt = m_ptrProSql->getProPassingCnt();
    ui->lb_cnt->setText(QString("数量：%1").arg(cnt));
    QList<ProPassingInfo> lProducts = m_ptrProSql->getPageProPassing(0,cnt);

    ui->tableWidget->setRowCount(cnt);
    for(int i = 0; i < lProducts.size(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::number(i+1)));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::number(lProducts[i].id)));
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(lProducts[i].proid));
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(lProducts[i].name));
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(lProducts[i].type));
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString::number(lProducts[i].unit_price)));
        ui->tableWidget->setItem(i, 6, new QTableWidgetItem(QString::number(lProducts[i].count)));
        lProducts[i].total_price = lProducts[i].unit_price * double(lProducts[i].count);
        ui->tableWidget->setItem(i, 7, new QTableWidgetItem(QString::number(lProducts[i].total_price)));
    }
    // 隐藏指定列
    ui->tableWidget->setColumnHidden(1, true);

}



