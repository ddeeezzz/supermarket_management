#include "dlg_addpropassing.h"
#include "ui_dlg_addpropassing.h"
#include "prosql.h"
#include <QMessageBox>
#include "mainwindow_ispass.h"


Dlg_AddProPassing::Dlg_AddProPassing(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_AddProPassing)
{
    ui->setupUi(this);
}

Dlg_AddProPassing::~Dlg_AddProPassing()
{
    delete ui;
}

void Dlg_AddProPassing::setType(bool isAdd,ProPassingInfo info)
{
    m_isAdd = isAdd;
    m_info = info;
    if(m_isAdd)
    {
        ui->le_title->setText(QString("添加订单"));
        ui->le_proid->setText("");
        ui->le_name->setText("");
        ui->le_type->setText("");
        ui->le_unit_price->setText("");
        ui->le_count->setText("");
    }
    else
    {
        ui->le_title->setText(QString("修改订单"));
        ui->le_proid->setText(info.proid);
        ui->le_name->setText(info.name);
        ui->le_type->setText(info.type);
        ui->le_unit_price->setText(QString::number(info.unit_price));
        ui->le_count->setText(QString::number(info.count));
    }  
}

void Dlg_AddProPassing::on_bin_save_clicked()
{
    ProPassingInfo info;
    auto ptr = proSql::getinstance();

    info.proid = ui->le_proid->text();
    info.name = ui->le_name->text();
    info.type = ui->le_type->text();
    info.unit_price = ui->le_unit_price->text().toDouble();
    info.count = ui->le_count->text().toUInt();
    if(m_isAdd)
    {
        ptr->addProPassing(info);
    }
    else
    {
        info.id = m_info.id;
        info.total_price =info.unit_price * double(info.count);
        ptr->UpdateProPassingInfo(info);
    }

    QMessageBox::information(nullptr,"信息","更新成功");
    this->hide();
    // ptr1->updateTablePassing();
}


void Dlg_AddProPassing::on_bin_cancel_clicked()
{
    this->hide();
}

