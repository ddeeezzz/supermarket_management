#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "page_lolgin.h"
#include <QMainWindow>
#include "prosql.h"
#include "dlg_addpro.h"
#include <QTreeWidget>
#include "page_personalcenter.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class Page_PersonalCenter;
class MainWindow_IsPass;
class MainWindow_UsersTab;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    virtual void keyPressEvent(QKeyEvent *event);

private slots:
    void on_bin_exit_clicked();

    void handleLoginSuccess(const QString &username, const QString &password, const QString &auth);

    void on_bin_simulation_clicked();

    void on_bin_add_clicked();

    void on_bin_clear_clicked();

    void on_bin_delete_clicked();

    void on_bin_update_clicked();

    void on_bin_search_clicked();

    void onTreeWidgetItemClicked(QTreeWidgetItem *item, int column);

    void hidePurchaseButton();


private:
    void updateTable();

    void updateTree(const QString &auth);

    void disableTreeWidgetItem(QTreeWidgetItem* item);

    Ui::MainWindow *ui;
    Page_Lolgin m_dlgLogin;
    proSql *m_ptrProSql;
    Dlg_AddPro m_dlgAddPro;
    Page_PersonalCenter *m_personalCenter;
    MainWindow_IsPass *m_mainwindow_ispass;
    MainWindow_UsersTab *m_mainwindow_userstab;
};
#endif // MAINWINDOW_H
