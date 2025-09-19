#ifndef MAINWINDOW_ISPASS_H
#define MAINWINDOW_ISPASS_H

#include <QMainWindow>
#include "dlg_addpropassing.h"
#include "page_lolgin.h"
#include "ui_mainwindow_ispass.h"

namespace Ui {
class MainWindow_IsPass;
}

class proSql;
class Dlg_AddProPassing;
class Page_Lolgin;

class MainWindow_IsPass : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_IsPass(QWidget *parent = nullptr);
    ~MainWindow_IsPass();

    Ui::MainWindow_IsPass *ui_1;
    void updateTablePassing();

private slots:
    void on_bin_add_clicked();

    void on_bin_update_clicked();

    void on_bin_delete_clicked();

    void on_bin_search_clicked();

    void on_bin_clear_clicked();

    void on_btn_pass_clicked();


private:
    Ui::MainWindow_IsPass *ui;
    proSql *m_ptrProSql;
    Dlg_AddProPassing m_dlgaddpropassing;
    Page_Lolgin m_dlgLogin;
};

#endif // MAINWINDOW_ISPASS_H
