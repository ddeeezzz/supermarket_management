/********************************************************************************
** Form generated from reading UI file 'page_personalcenter.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_PERSONALCENTER_H
#define UI_PAGE_PERSONALCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_PersonalCenter
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *bin_update;
    QPushButton *bin_exit;
    QWidget *widget_3;
    QLabel *label_2;
    QWidget *widget_4;
    QLineEdit *le_password;
    QLabel *label_3;
    QComboBox *cb_auth;
    QWidget *widget_2;
    QLabel *lib_title;

    void setupUi(QWidget *Page_PersonalCenter)
    {
        if (Page_PersonalCenter->objectName().isEmpty())
            Page_PersonalCenter->setObjectName("Page_PersonalCenter");
        Page_PersonalCenter->resize(419, 300);
        widget = new QWidget(Page_PersonalCenter);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 200, 401, 61));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        bin_update = new QPushButton(widget);
        bin_update->setObjectName("bin_update");
        bin_update->setMaximumSize(QSize(100, 16777215));
        QFont font;
        font.setPointSize(12);
        bin_update->setFont(font);

        horizontalLayout->addWidget(bin_update);

        bin_exit = new QPushButton(widget);
        bin_exit->setObjectName("bin_exit");
        bin_exit->setMaximumSize(QSize(100, 16777215));
        bin_exit->setFont(font);

        horizontalLayout->addWidget(bin_exit);

        widget_3 = new QWidget(Page_PersonalCenter);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(15, 70, 401, 121));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-30, 40, 101, 20));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(-30, 60, 376, 61));
        le_password = new QLineEdit(widget_4);
        le_password->setObjectName("le_password");
        le_password->setGeometry(QRect(120, 30, 251, 25));
        le_password->setMaximumSize(QSize(251, 16777215));
        QFont font2;
        font2.setPointSize(11);
        le_password->setFont(font2);
        le_password->setMaxLength(12);
        le_password->setEchoMode(QLineEdit::Normal);
        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-20, 30, 121, 21));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cb_auth = new QComboBox(widget_3);
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->addItem(QString());
        cb_auth->setObjectName("cb_auth");
        cb_auth->setGeometry(QRect(90, 40, 251, 22));
        cb_auth->setFont(font2);
        widget_2 = new QWidget(Page_PersonalCenter);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 10, 381, 80));
        lib_title = new QLabel(widget_2);
        lib_title->setObjectName("lib_title");
        lib_title->setGeometry(QRect(-10, 10, 411, 51));
        QFont font3;
        font3.setPointSize(18);
        lib_title->setFont(font3);
        lib_title->setAlignment(Qt::AlignCenter);

        retranslateUi(Page_PersonalCenter);

        QMetaObject::connectSlotsByName(Page_PersonalCenter);
    } // setupUi

    void retranslateUi(QWidget *Page_PersonalCenter)
    {
        Page_PersonalCenter->setWindowTitle(QCoreApplication::translate("Page_PersonalCenter", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        bin_update->setText(QCoreApplication::translate("Page_PersonalCenter", "\346\233\264\346\226\260", nullptr));
        bin_exit->setText(QCoreApplication::translate("Page_PersonalCenter", "\345\205\263\351\227\255", nullptr));
        label_2->setText(QCoreApplication::translate("Page_PersonalCenter", "\346\235\203\351\231\220", nullptr));
        le_password->setPlaceholderText(QCoreApplication::translate("Page_PersonalCenter", "\350\257\267\350\276\223\345\205\245\357\274\210\344\270\215\350\266\205\350\277\20712\344\275\215\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("Page_PersonalCenter", "\345\257\206\347\240\201", nullptr));
        cb_auth->setItemText(0, QCoreApplication::translate("Page_PersonalCenter", "--", nullptr));
        cb_auth->setItemText(1, QCoreApplication::translate("Page_PersonalCenter", "\347\256\241\347\220\206\345\221\230", nullptr));
        cb_auth->setItemText(2, QCoreApplication::translate("Page_PersonalCenter", "\351\207\207\350\264\255\345\221\230", nullptr));
        cb_auth->setItemText(3, QCoreApplication::translate("Page_PersonalCenter", "\345\205\266\344\273\226\347\224\250\346\210\267", nullptr));

        lib_title->setText(QCoreApplication::translate("Page_PersonalCenter", "\344\270\252\344\272\272\344\270\255\345\277\203\357\274\210\347\224\250\346\210\267\345\220\215\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_PersonalCenter: public Ui_Page_PersonalCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_PERSONALCENTER_H
