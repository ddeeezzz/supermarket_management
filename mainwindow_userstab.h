#ifndef MAINWINDOW_USERSTAB_H
#define MAINWINDOW_USERSTAB_H

#include <QMainWindow>
#include "prosql.h"
#include "dlg_adduser.h"

namespace Ui {
class MainWindow_UsersTab;
}

class proSql;
class Dlg_AddUser;

class MainWindow_UsersTab : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_UsersTab(QWidget *parent = nullptr);
    ~MainWindow_UsersTab();

private slots:
    void on_bin_add_clicked();

    void on_bin_update_clicked();

    void on_bin_delete_clicked();

    void on_bin_clear_clicked();

    void on_bin_search_clicked();

private:
    Ui::MainWindow_UsersTab *ui;
    void updateUsersTab();
    proSql *m_ptrProSql;
    Dlg_AddUser *m_ptradduser;
};

#endif // MAINWINDOW_USERSTAB_H
