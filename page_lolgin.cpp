#include "page_lolgin.h"
#include "ui_page_lolgin.h"
#include "prosql.h"

#include <QMessageBox>

Page_Lolgin::Page_Lolgin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Page_Lolgin)
{
    ui->setupUi(this);

    auto* databaseInstance = proSql::getinstance();
    databaseInstance->init();


}

Page_Lolgin::~Page_Lolgin()
{
    delete ui;
}

void Page_Lolgin::on_bin_login_clicked()
{
    //数据库查找用户名和密码
    auto* databaseInstance = proSql::getinstance();

    QString inputUsername = ui->le_username->text();
    QString inputPassword = ui->le_password->text();
    QString inputAuth;
    // 获取所有用户信息
    QList<UserInfo> userList = databaseInstance->getAllUser();

    // 验证用户名和密码
    bool loginSuccess = false;
    for (const UserInfo &user : userList) {
        if (user.username == inputUsername && user.password == inputPassword) {
            loginSuccess = true;
            inputUsername = user.username;
            inputPassword = user.password;
            inputAuth = user.auth;
            break;
        }
    }

    if (loginSuccess) {
        // 登录成功，进入主界面
        QMessageBox::information(this, "登录成功", "欢迎使用本系统！");
        // 发出信号或调用主界面函数
        emit sendLoginSuccess(inputUsername, inputPassword, inputAuth);
    } else
    {
        // 登录失败，提示用户
        QMessageBox::warning(this, "登录失败", "用户名或密码错误");
    }
}


void Page_Lolgin::on_bin_exit_clicked()
{
    //退出
    exit(0);
}


void Page_Lolgin::on_bin_register_clicked()
{
    UserInfo info;
    auto ptr = proSql::getinstance();
    info.username = ui->le_username->text();
    info.password = ui->le_password->text();
    info.auth = QString("other");
    if(ptr->isExit(info.username)){
        QMessageBox::warning(nullptr,"注册失败","用户名已存在，请重新输入");
    }
    else {
        ptr->AddUser(info);
        QMessageBox::information(nullptr,"注册成功","新用户注册成功（权限：其他用户）");
        emit sendLoginSuccess(info.username, info.password, info.auth);
    }
}

// 显示密码
void Page_Lolgin::on_checkBox_clicked(bool checked)
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
