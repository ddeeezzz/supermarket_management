/********************************************************************************
** Form generated from reading UI file 'page_lolgin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOLGIN_H
#define UI_PAGE_LOLGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Lolgin
{
public:
    QLabel *lib_title;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bin_login;
    QPushButton *bin_register;
    QPushButton *bin_exit;
    QWidget *widget_3;
    QLineEdit *le_username;
    QLabel *label_2;
    QWidget *widget_4;
    QLineEdit *le_password;
    QLabel *label_3;
    QCheckBox *checkBox;

    void setupUi(QWidget *Page_Lolgin)
    {
        if (Page_Lolgin->objectName().isEmpty())
            Page_Lolgin->setObjectName("Page_Lolgin");
        Page_Lolgin->resize(410, 240);
        Page_Lolgin->setMinimumSize(QSize(410, 240));
        Page_Lolgin->setMaximumSize(QSize(410, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Pictures/Saved Pictures/wxyd.png"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Lolgin->setWindowIcon(icon);
        lib_title = new QLabel(Page_Lolgin);
        lib_title->setObjectName("lib_title");
        lib_title->setGeometry(QRect(0, 0, 411, 71));
        QFont font;
        font.setPointSize(18);
        lib_title->setFont(font);
        lib_title->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Page_Lolgin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 160, 388, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        bin_login = new QPushButton(widget);
        bin_login->setObjectName("bin_login");
        bin_login->setMaximumSize(QSize(100, 16777215));
        QFont font1;
        font1.setPointSize(12);
        bin_login->setFont(font1);

        horizontalLayout->addWidget(bin_login);

        bin_register = new QPushButton(widget);
        bin_register->setObjectName("bin_register");
        bin_register->setMaximumSize(QSize(100, 16777215));
        bin_register->setFont(font1);

        horizontalLayout->addWidget(bin_register);

        bin_exit = new QPushButton(widget);
        bin_exit->setObjectName("bin_exit");
        bin_exit->setMaximumSize(QSize(100, 16777215));
        bin_exit->setFont(font1);

        horizontalLayout->addWidget(bin_exit);

        widget_3 = new QWidget(Page_Lolgin);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 40, 411, 121));
        le_username = new QLineEdit(widget_3);
        le_username->setObjectName("le_username");
        le_username->setGeometry(QRect(80, 40, 251, 25));
        le_username->setMaximumSize(QSize(251, 16777215));
        QFont font2;
        font2.setPointSize(11);
        le_username->setFont(font2);
        le_username->setMaxLength(6);
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 40, 71, 20));
        QFont font3;
        font3.setPointSize(14);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 50, 411, 61));
        le_password = new QLineEdit(widget_4);
        le_password->setObjectName("le_password");
        le_password->setGeometry(QRect(80, 30, 251, 25));
        le_password->setMaximumSize(QSize(251, 16777215));
        le_password->setFont(font2);
        le_password->setMaxLength(12);
        le_password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 30, 71, 21));
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        checkBox = new QCheckBox(widget_4);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(340, 30, 61, 18));
        label_2->raise();
        widget_4->raise();
        le_username->raise();
        QWidget::setTabOrder(le_username, le_password);
        QWidget::setTabOrder(le_password, bin_login);
        QWidget::setTabOrder(bin_login, bin_register);
        QWidget::setTabOrder(bin_register, bin_exit);

        retranslateUi(Page_Lolgin);

        QMetaObject::connectSlotsByName(Page_Lolgin);
    } // setupUi

    void retranslateUi(QWidget *Page_Lolgin)
    {
        Page_Lolgin->setWindowTitle(QCoreApplication::translate("Page_Lolgin", "\347\231\273\345\275\225/\346\263\250\345\206\214", nullptr));
#if QT_CONFIG(tooltip)
        Page_Lolgin->setToolTip(QCoreApplication::translate("Page_Lolgin", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        lib_title->setText(QCoreApplication::translate("Page_Lolgin", "\350\266\205\345\270\202\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        bin_login->setText(QCoreApplication::translate("Page_Lolgin", "\347\231\273\345\275\225", nullptr));
        bin_register->setText(QCoreApplication::translate("Page_Lolgin", "\346\263\250\345\206\214", nullptr));
        bin_exit->setText(QCoreApplication::translate("Page_Lolgin", "\351\200\200\345\207\272", nullptr));
        le_username->setText(QString());
        le_username->setPlaceholderText(QCoreApplication::translate("Page_Lolgin", "\350\257\267\350\276\223\345\205\245\357\274\210\344\270\215\350\266\205\350\277\2076\344\275\215\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("Page_Lolgin", "\347\224\250\346\210\267\345\220\215", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Page_Lolgin", "\350\257\267\350\276\223\345\205\245\357\274\210\344\270\215\350\266\205\350\277\20712\344\275\215\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("Page_Lolgin", "\345\257\206\347\240\201", nullptr));
        checkBox->setText(QCoreApplication::translate("Page_Lolgin", "\346\230\276\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Lolgin: public Ui_Page_Lolgin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOLGIN_H
