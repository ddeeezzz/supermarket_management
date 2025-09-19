#ifndef DLG_ADDPRO_H
#define DLG_ADDPRO_H

#include <QDialog>
#include "prosql.h"

namespace Ui {
class Dlg_AddPro;
}

class Dlg_AddPro : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_AddPro(QWidget *parent = nullptr);
    ~Dlg_AddPro();

    void setType(bool isAdd,ProInfo info);
    ProInfo getUpdatedInfo() const;



private slots:

    void on_bin_save_clicked();

    void on_bin_cancel_clicked();



private:
    Ui::Dlg_AddPro *ui;
    bool m_isAdd;
    int m_id;
    ProInfo m_info;
};

#endif // DLG_ADDPRO_H
