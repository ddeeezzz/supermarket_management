#ifndef PAGE_PERSONALCENTER_H
#define PAGE_PERSONALCENTER_H

#include <QDialog>

namespace Ui {
class Page_PersonalCenter;
}

class Page_PersonalCenter : public QDialog
{
    Q_OBJECT

public:
    explicit Page_PersonalCenter(QWidget *parent = nullptr);
    ~Page_PersonalCenter();

    // 公共方法，用于设置用户信息
    void setUserInfo(const QString &username, const QString &password, const QString &auth);

private slots:
    void on_bin_update_clicked();

    void on_bin_exit_clicked();

private:
    Ui::Page_PersonalCenter *ui;
};

#endif // PAGE_PERSONALCENTER_H
