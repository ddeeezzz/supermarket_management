#include "dlg_adduser.h"
#include "ui_dlg_adduser.h"
#include "prosql.h"
#include <QMessageBox>
#include <QDebug>
#include <QStandardItemModel>
#include <QComboBox>

Dlg_AddUser::Dlg_AddUser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_AddUser)
{
    ui->setupUi(this);

    // 获取QComboBox的模型
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->cb_auth->model());

    // 禁用第二个选项（索引从0开始）
    QStandardItem *item = model->item(0);
    item->setFlags(item->flags() & ~Qt::ItemIsEnabled);
}

Dlg_AddUser::~Dlg_AddUser()
{
    delete ui;
}

void Dlg_AddUser::setType(bool isAdd,UserInfo info)
{
    m_isAdd = isAdd;
    if(m_isAdd)
    {
        ui->lib_title->setText(QString("添加账号"));
        ui->le_username->setReadOnly(false);
        ui->le_username->setText(QString(""));
        ui->le_password->setText(QString(""));
        ui->cb_auth->setCurrentText(QString("请选择"));
    }
    else
    {
        ui->lib_title->setText(QString("修改账号"));
        ui->le_username->setText(info.username);
        ui->le_username->setReadOnly(true);
    }
    m_info = info;
    qDebug()<<info.username;
    ui->le_password->setText(info.password);
    if (m_info.auth == QString("admin")) {
        ui->cb_auth->setCurrentText(QString("管理员"));
    } else if (m_info.auth == QString("buyer")) {
         ui->cb_auth->setCurrentText(QString("采购员"));
    } else if (m_info.auth == QString("other")) {
        ui->cb_auth->setCurrentText(QString("其他用户"));
    } else if (m_info.auth == QString("")) {
        ui->cb_auth->setCurrentText(QString("请选择"));
    }
}

void Dlg_AddUser::on_bin_save_clicked()
{
    UserInfo info;
    auto ptr = proSql::getinstance();
    qDebug()<<info.auth;

    if(m_isAdd)
    {
        info.username = ui->le_username->text();
        info.password = ui->le_password->text();
        info.auth = m_info.auth;
        if(ptr->isExit(info.username)){
            QMessageBox::warning(nullptr,"添加失败","用户名已存在，请重新输入");
            return;
        }
        else {
            ptr->AddUser(info);
        }
    }
    else
    {
        info.auth = m_info.auth;
        info.username = m_info.username;
        info.password = ui->le_password->text();
        ptr->updateUser(info);
    }

    QMessageBox::information(nullptr,"信息","更新成功");
    this->hide();
}


void Dlg_AddUser::on_bin_cancel_clicked()
{
    this->hide();
}

// 显示密码
void Dlg_AddUser::on_checkBox_clicked(bool checked)
{
    if(checked)
    {
        ui->le_password->setEchoMode(QLineEdit::Normal);
    }
    else
    {
        ui->le_password->setEchoMode(QLineEdit::Password);
    }
}


void Dlg_AddUser::on_cb_auth_currentTextChanged(const QString &arg1)
{

    QString authText = arg1;
    if (authText == QString("管理员")) {
        m_info.auth = QString("admin");
    } else if (authText == QString("采购员")) {
        m_info.auth = QString("buyer");
    } else if (authText == QString("其他用户")) {
       m_info.auth = QString("other");
    }
    qDebug() << m_info.auth;

}

