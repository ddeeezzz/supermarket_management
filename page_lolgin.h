#ifndef PAGE_LOLGIN_H
#define PAGE_LOLGIN_H

#include <QWidget>

namespace Ui {
class Page_Lolgin;
}

class Page_Lolgin : public QWidget
{
    Q_OBJECT

public:
    explicit Page_Lolgin(QWidget *parent = nullptr);
    ~Page_Lolgin();

private slots:
    void on_bin_login_clicked();

    void on_bin_exit_clicked();

    void on_bin_register_clicked();

    void on_checkBox_clicked(bool checked);

signals:
    void sendLoginSuccess(const QString &username, const QString &password, const QString &auth);

private:
    Ui::Page_Lolgin *ui;


};

#endif // PAGE_LOLGIN_H
