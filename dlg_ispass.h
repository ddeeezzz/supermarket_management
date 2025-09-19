#ifndef DLG_ISPASS_H
#define DLG_ISPASS_H

#include <QDialog>
#include "prosql.h"

namespace Ui {
class Dlg_IsPass;
}

class Dlg_IsPass : public QDialog
{
    Q_OBJECT

public:
    explicit Dlg_IsPass(QWidget *parent = nullptr);
    ~Dlg_IsPass();

private:
    Ui::Dlg_IsPass *ui;
};

#endif // DLG_ISPASS_H
