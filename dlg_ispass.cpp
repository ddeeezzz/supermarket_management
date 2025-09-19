#include "dlg_ispass.h"
#include "ui_dlg_ispass.h"

Dlg_IsPass::Dlg_IsPass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_IsPass)
{
    ui->setupUi(this);
}

Dlg_IsPass::~Dlg_IsPass()
{
    delete ui;
}
