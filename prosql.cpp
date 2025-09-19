#include "prosql.h"

#include <QCoreApplication>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlError>
#include <QDebug>

proSql * proSql::ptrproSql = nullptr;
proSql::proSql(QObject *parent)
    : QObject{parent}
{


    init();
}

void proSql::init()
{
    if (QSqlDatabase::drivers().isEmpty())
        qDebug()<<"No database drivers found";


    m_db = QSqlDatabase::addDatabase("QSQLITE");
#if 1
    auto str = QCoreApplication::applicationDirPath()+"/data.db";
    qDebug()<<str;
#endif
    // auto str = QCoreApplication::applicationDirPath();
    qDebug()<<str;
    m_db.setDatabaseName(str);
    if (!m_db.open())
        qDebug()<<"db not open";
}

quint32 proSql::getProCnt()
{
    QSqlQuery sql(m_db);
    sql.exec("select count(id) from product;");
    quint32 uiCnt = 0;
    while(sql.next())
    {
        uiCnt = sql.value(0).toUInt();
    }
    return uiCnt;
}

quint32 proSql::getProPassingCnt()
{
    QSqlQuery sql(m_db);
    sql.exec("select count(id) from product_passing;");
    quint32 uiCnt = 0;
    while(sql.next())
    {
        uiCnt = sql.value(0).toUInt();
    }
    return uiCnt;
}

QList<ProInfo> proSql::getPagePro(quint32 page, quint32 uiCnt)
{
    QList<ProInfo> l;
    QSqlQuery sql(m_db);
    QString strsql = QString("select * from product order by id limit %1 offset %2;").
                     arg(uiCnt).arg(page*uiCnt);
    sql.exec(strsql);

    ProInfo info;
    while(sql.next())
    {
        info.id = sql.value(0).toUInt();
        info.proid = sql.value(1).toString();
        info.name = sql.value(2).toString();
        info.type = sql.value(3).toString();
        info.price = sql.value(4).toDouble();
        info.count = sql.value(5).toUInt();
        l.push_back(info);
    }
    return l;
}

QList<ProPassingInfo> proSql::getPageProPassing(quint32 page, quint32 uiCnt)
{
    QList<ProPassingInfo> l;
    QSqlQuery sql(m_db);
    QString strsql = QString("select * from product_passing order by id limit %1 offset %2;").
                     arg(uiCnt).arg(page*uiCnt);
    sql.exec(strsql);

    ProPassingInfo info;
    while(sql.next())
    {
        info.id = sql.value(0).toUInt();
        info.proid = sql.value(1).toString();
        info.name = sql.value(2).toString();
        info.type = sql.value(3).toString();
        info.unit_price = sql.value(4).toDouble();
        info.count = sql.value(5).toUInt();
        info.total_price = sql.value(6).toDouble();
        l.push_back(info);
    }
    return l;
}

bool proSql::addPro(ProInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("insert into product values(null,'%1','%2','%3',%4,%5)").
                     arg(info.proid).
                     arg(info.name).
                     arg(info.type).
                     arg(info.price).
                     arg(info.count);
    return sql.exec(strSql);
}

bool proSql::addPro(QList<ProInfo> l)
{
    QSqlQuery sql(m_db);
    m_db.transaction();
    for(const auto &info:l)
    {
        QString strSql = QString("insert into product values(null,'%1','%2','%3',%4,%5);").
                     arg(info.proid).
                     arg(info.name).
                     arg(info.type).
                     arg(info.price).
                     arg(info.count);
        sql.exec(strSql);
    }
    m_db.commit();

    return true;
}

bool proSql::addProPassing(ProPassingInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("insert into product_passing values(null,'%1','%2','%3',%4,%5,%6);").
                     arg(info.proid).
                     arg(info.name).
                     arg(info.type).
                     arg(info.unit_price).
                     arg(info.count).
                     arg(info.total_price);
    return sql.exec(strSql);
}

bool proSql::addProPassing(QList<ProPassingInfo> l)
{
    QSqlQuery sql(m_db);
    m_db.transaction();
    for(const auto &info:l)
    {
        QString strSql = QString("insert into product_passing values(null,'%1','%2','%3',%4,%5,%6)").
                         arg(info.proid).
                         arg(info.name).
                         arg(info.type).
                         arg(info.unit_price).
                         arg(info.count).
                         arg(info.total_price);
        sql.exec(strSql);
    }
    m_db.commit();

    return true;
}

bool proSql::delPro(int id)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from product where id = %1;").arg(id));
}

bool proSql::delProPassing(int id)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from product_passing where id = %1;").arg(id));
}

bool proSql::clearProTable()
{
    QSqlQuery sql(m_db);
    sql.exec("delete from product");

    return sql.exec("delete from sqlite_sequence where name = 'product'");
}

bool proSql::clearProPassingTable()
{
    QSqlQuery sql(m_db);
    sql.exec("delete from product_passing");

    return sql.exec("delete from sqlite_sequence where name = 'product_passing'");
}

bool proSql::UpdateProInfo(ProInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update product set proid='%1',name='%2',type='%3',price =%4,count=%5 where id='%6'").
                     arg(info.proid).
                     arg(info.name).
                     arg(info.type).
                     arg(info.price).
                     arg(info.count).arg(QString::number(info.id));
    return sql.exec(strSql);
}

bool proSql::UpdateProPassingInfo(ProPassingInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update product_passing set proid='%1',name='%2',type='%3',unit_price =%4,count=%5,total_price =%6 where id='%7'").
                     arg(info.proid).
                     arg(info.name).
                     arg(info.type).
                     arg(info.unit_price).
                     arg(info.count).
                     arg(info.total_price).arg(QString::number(info.id));
    qDebug()<<QString(strSql);
    return sql.exec(strSql);
}

QList<UserInfo> proSql::getAllUser()
{
    QList<UserInfo> l;
    QSqlQuery sql(m_db);
    QString strsql = QString("select * from users");
    sql.exec(strsql);

    UserInfo info;
    while(sql.next())
    {
        info.username = sql.value(0).toString();
        info.password = sql.value(1).toString();
        info.auth = sql.value(2).toString();
        l.push_back(info);
    }
    return l;
}

bool proSql::isExit(QString strUser)
{
    QSqlQuery sql(m_db);
    sql.exec(QString("select *from users where username='%1'").arg(strUser));
    return sql.next();
}

bool proSql::updateUser(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("update users set password='%1',auth='%2' where username='%3'").
                     arg(info.password).
                     arg(info.auth).
                     arg(info.username);
    return sql.exec(strSql);
}

bool proSql::AddUser(UserInfo info)
{
    QSqlQuery sql(m_db);
    QString strSql = QString("insert into users values('%1','%2','%3')").
                     arg(info.username).
                     arg(info.password).
                     arg(info.auth);
    return sql.exec(strSql);
}

bool proSql::delUser(QString strUserName)
{
    QSqlQuery sql(m_db);
    return sql.exec(QString("delete from users where username='%1'").arg(strUserName));
}

