#include "page_personalcenter.h"
#include "ui_page_personalcenter.h"
#include "prosql.h"
#include <QDebug>
#include <QMessageBox>

UserInfo info;

Page_PersonalCenter::Page_PersonalCenter(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Page_PersonalCenter)
{
    ui->setupUi(this);

    auto* databaseInstance = proSql::getinstance();
    databaseInstance->init();

}

Page_PersonalCenter::~Page_PersonalCenter()
{
    delete ui;
}

void Page_PersonalCenter::on_bin_update_clicked()
{

    auto ptr = proSql::getinstance();
    info.password = ui->le_password->text();
    ptr->updateUser(info);
    QMessageBox::information(nullptr,"信息","更新成功");
    this->hide();
}


void Page_PersonalCenter::on_bin_exit_clicked()
{
    this->hide();
}

void Page_PersonalCenter::setUserInfo(const QString &username, const QString &password, const QString &auth)
{
    info.username = username;
    info.auth = auth;
    // 将用户信息显示在页面上
    ui->cb_auth->setDisabled(true);

    if(auth == QString("admin")) {
        ui->cb_auth->setCurrentText(QString("管理员"));
    } else if(auth == QString("buyer")) {
        ui->cb_auth->setCurrentText(QString("采购员"));

    }else if(auth == QString("other")) {
        ui->cb_auth->setCurrentText(QString("其他用户"));
    }

    ui->lib_title->setText("个人中心（"+ username +"）");

    ui->le_password->setText(password);

}


