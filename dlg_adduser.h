#ifndef DLG_ADDUSER_H
#define DLG_ADDUSER_H

#include <QDialog>
#include "prosql.h"

namespace Ui {
class Dlg_AddUser;
}

class Dlg_AddUser : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_AddUser(QWidget *parent = nullptr);
    ~Dlg_AddUser();

    void setType(bool isAdd,UserInfo info);
    UserInfo getUpdatedInfo() const;

private slots:
    void on_bin_save_clicked();

    void on_bin_cancel_clicked();
    void on_checkBox_clicked(bool checked);

    void on_cb_auth_currentTextChanged(const QString &arg1);

private:
    Ui::Dlg_AddUser *ui;
    bool m_isAdd;
    int m_id;
    UserInfo m_info;
};

#endif // DLG_ADDUSER_H
