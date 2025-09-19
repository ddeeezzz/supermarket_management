#ifndef PROSQL_H
#define PROSQL_H

#include <QObject>
#include <QSqlDatabase>

struct ProInfo
{
    int id;
    QString proid;
    QString name;
    QString type;
    double price;
    quint32 count;
};
struct UserInfo
{
    QString username;
    QString password;
    QString auth;
};
struct ProPassingInfo
{
    int id;
    QString proid;
    QString name;
    QString type;
    double unit_price;
    quint32 count;
    double total_price;
};

class proSql : public QObject
{
    Q_OBJECT
public:
    static proSql *ptrproSql;
    static proSql *getinstance()
    {
        if(nullptr == ptrproSql)
        {
            ptrproSql = new proSql;
        }
        return ptrproSql;
    }

    explicit proSql(QObject *parent = nullptr);

    void init();

    //查询所有商品数量
    quint32 getProCnt();

    //查询所有审核中的商品数量
    quint32 getProPassingCnt();

    //查询第几页商品数据，页数从0开始
    QList<ProInfo> getPagePro(quint32 page, quint32 uiCnt);

    //查询第几页审核中的商品数据，页数从0开始
    QList<ProPassingInfo> getPageProPassing(quint32 page, quint32 uiCnt);

    //增加商品
    bool addPro(ProInfo);
    bool addPro(QList<ProInfo> l);

    //增加审核中的商品
    bool addProPassing(ProPassingInfo);
    bool addProPassing(QList<ProPassingInfo> l);

    //删除商品
    bool delPro(int id);

    //删除审核中的商品
    bool delProPassing(int id);

    //清空商品表
    bool clearProTable();

    //清空待审核商品表
    bool clearProPassingTable();

    //修改商品信息
    bool UpdateProInfo(ProInfo);

    //修改审核中的商品信息
    bool UpdateProPassingInfo(ProPassingInfo);

    //查询所有用户
    QList<UserInfo> getAllUser();

    //查询用户名是否存在
    bool isExit(QString strUser);

    //更新用户信息
    bool updateUser(UserInfo info);

    //添加单个用户
    bool AddUser(UserInfo info);

    //删除单个用户
    bool delUser(QString strUserName);

signals:
private:
    QSqlDatabase m_db;
};

#endif // PROSQL_H
