#ifndef DLG_ADDPROPASSING_H
#define DLG_ADDPROPASSING_H

#include <QDialog>
#include "prosql.h"

namespace Ui {
class Dlg_AddProPassing;
}


class Dlg_AddProPassing : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_AddProPassing(QWidget *parent = nullptr);
    ~Dlg_AddProPassing();

    void setType(bool isAdd,ProPassingInfo info);
    ProPassingInfo getUpdatedInfo() const;



private slots:
    void on_bin_save_clicked();

    void on_bin_cancel_clicked();

private:
    Ui::Dlg_AddProPassing *ui;

    bool m_isAdd;
    int m_id;
    ProPassingInfo m_info;


};


#endif // DLG_ADDPROPASSING_H
