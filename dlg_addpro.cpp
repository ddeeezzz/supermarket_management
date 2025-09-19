#include "dlg_addpro.h"
#include "ui_dlg_addpro.h"
#include "prosql.h"
#include <QMessageBox>

Dlg_AddPro::Dlg_AddPro(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_AddPro)
{
    ui->setupUi(this);
}

Dlg_AddPro::~Dlg_AddPro()
{
    delete ui;
}

void Dlg_AddPro::setType(bool isAdd,ProInfo info)
{
    m_isAdd = isAdd;
    m_info = info;
    if(m_isAdd)
    {
        ui->le_title->setText(QString("添加商品"));
        ui->le_count->setText("");
        ui->le_name->setText("");
        ui->le_price->setText("");
        ui->le_proid->setText("");
        ui->le_type->setText("");
    }
    else
    {
        ui->le_title->setText(QString("更新商品"));
        ui->le_proid->setText(info.proid);
        ui->le_name->setText(info.name);
        ui->le_type->setText(info.type);
        ui->le_price->setText(QString::number(info.price));
        ui->le_count->setText(QString::number(info.count));
    }
}




void Dlg_AddPro::on_bin_save_clicked()
{
    ProInfo info;
    auto ptr = proSql::getinstance();

    info.proid = ui->le_proid->text();
    info.name = ui->le_name->text();
    info.type = ui->le_type->text();
    info.price = ui->le_price->text().toDouble();
    info.count = ui->le_count->text().toUInt();

    if(m_isAdd)
    {
        ptr->addPro(info);
    }
    else
    {
        info.id = m_info.id;
        ptr->UpdateProInfo(info);
    }

    QMessageBox::information(nullptr,"信息","更新成功");
    this->hide();
}


void Dlg_AddPro::on_bin_cancel_clicked()
{
    this->hide();
}




