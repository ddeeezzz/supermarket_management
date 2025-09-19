/********************************************************************************
** Form generated from reading UI file 'dlg_adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDUSER_H
#define UI_DLG_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_AddUser
{
public:
    QWidget *widget_3;
    QLineEdit *le_username;
    QLabel *label_2;
    QWidget *widget_4;
    QLineEdit *le_password;
    QLabel *label_3;
    QCheckBox *checkBox;
    QWidget *widget;
    QPushButton *bin_save;
    QPushButton *bin_cancel;
    QLabel *lib_title;
    QLabel *label_4;
    QComboBox *cb_auth;

    void setupUi(QDialog *Dlg_AddUser)
    {
        if (Dlg_AddUser->objectName().isEmpty())
            Dlg_AddUser->setObjectName("Dlg_AddUser");
        Dlg_AddUser->resize(401, 248);
        widget_3 = new QWidget(Dlg_AddUser);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 20, 411, 121));
        le_username = new QLineEdit(widget_3);
        le_username->setObjectName("le_username");
        le_username->setGeometry(QRect(80, 40, 251, 25));
        le_username->setMaximumSize(QSize(251, 16777215));
        QFont font;
        font.setPointSize(11);
        le_username->setFont(font);
        le_username->setMaxLength(6);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 40, 71, 20));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 50, 411, 61));
        le_password = new QLineEdit(widget_4);
        le_password->setObjectName("le_password");
        le_password->setGeometry(QRect(80, 30, 251, 25));
        le_password->setMaximumSize(QSize(251, 16777215));
        le_password->setFont(font);
        le_password->setMaxLength(12);
        le_password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 30, 71, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox = new QCheckBox(widget_4);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(340, 30, 61, 18));
        label_2->raise();
        widget_4->raise();
        le_username->raise();
        widget = new QWidget(Dlg_AddUser);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 170, 388, 61));
        bin_save = new QPushButton(widget);
        bin_save->setObjectName("bin_save");
        bin_save->setGeometry(QRect(63, 19, 80, 22));
        bin_save->setMaximumSize(QSize(100, 16777215));
        QFont font2;
        font2.setPointSize(12);
        bin_save->setFont(font2);
        bin_cancel = new QPushButton(widget);
        bin_cancel->setObjectName("bin_cancel");
        bin_cancel->setGeometry(QRect(224, 19, 80, 22));
        bin_cancel->setMaximumSize(QSize(100, 16777215));
        bin_cancel->setFont(font2);
        lib_title = new QLabel(Dlg_AddUser);
        lib_title->setObjectName("lib_title");
        lib_title->setGeometry(QRect(0, -10, 411, 71));
        QFont font3;
        font3.setPointSize(18);
        lib_title->setFont(font3);
        lib_title->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(Dlg_AddUser);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 140, 71, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cb_auth = new QComboBox(Dlg_AddUser);
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->setObjectName("cb_auth");
        cb_auth->setGeometry(QRect(91, 140, 251, 22));

        retranslateUi(Dlg_AddUser);

        QMetaObject::connectSlotsByName(Dlg_AddUser);
    } // setupUi

    void retranslateUi(QDialog *Dlg_AddUser)
    {
        Dlg_AddUser->setWindowTitle(QCoreApplication::translate("Dlg_AddUser", "Dialog", nullptr));
        le_username->setText(QString());
        le_username->setPlaceholderText(QCoreApplication::translate("Dlg_AddUser", "\350\257\267\350\276\223\345\205\245\357\274\210\344\270\215\350\266\205\350\277\2076\344\275\215\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_AddUser", "\347\224\250\346\210\267\345\220\215", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Dlg_AddUser", "\350\257\267\350\276\223\345\205\245\357\274\210\344\270\215\350\266\205\350\277\20712\344\275\215\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_AddUser", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("Dlg_AddUser", "\346\230\276\347\244\272", nullptr));
#if QT_CONFIG(tooltip)
        widget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        bin_save->setText(QCoreApplication::translate("Dlg_AddUser", "\347\241\256\345\256\232", nullptr));
        bin_cancel->setText(QCoreApplication::translate("Dlg_AddUser", "\345\217\226\346\266\210", nullptr));
        lib_title->setText(QCoreApplication::translate("Dlg_AddUser", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_AddUser", "\346\235\203\351\231\220", nullptr));
        cb_auth->setItemText(0, QCoreApplication::translate("Dlg_AddUser", "\350\257\267\351\200\211\346\213\251", nullptr));
        cb_auth->setItemText(1, QCoreApplication::translate("Dlg_AddUser", "\345\205\266\344\273\226\347\224\250\346\210\267", nullptr));
        cb_auth->setItemText(2, QCoreApplication::translate("Dlg_AddUser", "\351\207\207\350\264\255\345\221\230", nullptr));
        cb_auth->setItemText(3, QCoreApplication::translate("Dlg_AddUser", "\347\256\241\347\220\206\345\221\230", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dlg_AddUser: public Ui_Dlg_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDUSER_H
