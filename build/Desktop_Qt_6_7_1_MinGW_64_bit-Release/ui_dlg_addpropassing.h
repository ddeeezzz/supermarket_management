/********************************************************************************
** Form generated from reading UI file 'dlg_addpropassing.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDPROPASSING_H
#define UI_DLG_ADDPROPASSING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_AddProPassing
{
public:
    QGridLayout *gridLayout_7;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *le_title;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *le_proid;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QGridLayout *gridLayout_5;
    QLineEdit *le_type;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLineEdit *le_unit_price;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLineEdit *le_count;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *bin_save;
    QPushButton *bin_cancel;

    void setupUi(QDialog *Dlg_AddProPassing)
    {
        if (Dlg_AddProPassing->objectName().isEmpty())
            Dlg_AddProPassing->setObjectName("Dlg_AddProPassing");
        Dlg_AddProPassing->resize(268, 520);
        gridLayout_7 = new QGridLayout(Dlg_AddProPassing);
        gridLayout_7->setObjectName("gridLayout_7");
        widget_7 = new QWidget(Dlg_AddProPassing);
        widget_7->setObjectName("widget_7");
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(88, 18, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        le_title = new QLabel(widget_7);
        le_title->setObjectName("le_title");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(18);
        le_title->setFont(font);
        le_title->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_title);

        horizontalSpacer_3 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_7->addWidget(widget_7, 0, 0, 1, 1);

        widget_2 = new QWidget(Dlg_AddProPassing);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setMaximumSize(QSize(40, 16777215));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        le_proid = new QLineEdit(widget_2);
        le_proid->setObjectName("le_proid");
        le_proid->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_proid, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_2, 1, 0, 1, 1);

        widget_3 = new QWidget(Dlg_AddProPassing);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(widget_3);
        label->setObjectName("label");
        label->setMinimumSize(QSize(40, 0));
        label->setMaximumSize(QSize(40, 16777215));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(widget_3);
        le_name->setObjectName("le_name");
        le_name->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(le_name, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_3, 2, 0, 1, 1);

        widget_4 = new QWidget(Dlg_AddProPassing);
        widget_4->setObjectName("widget_4");
        gridLayout_5 = new QGridLayout(widget_4);
        gridLayout_5->setObjectName("gridLayout_5");
        le_type = new QLineEdit(widget_4);
        le_type->setObjectName("le_type");
        le_type->setMinimumSize(QSize(0, 30));

        gridLayout_5->addWidget(le_type, 0, 1, 1, 1);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(40, 0));
        label_3->setMaximumSize(QSize(40, 16777215));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_4, 3, 0, 1, 1);

        widget_5 = new QWidget(Dlg_AddProPassing);
        widget_5->setObjectName("widget_5");
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName("gridLayout_4");
        le_unit_price = new QLineEdit(widget_5);
        le_unit_price->setObjectName("le_unit_price");
        le_unit_price->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(le_unit_price, 0, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(40, 16777215));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_5, 4, 0, 1, 1);

        widget_6 = new QWidget(Dlg_AddProPassing);
        widget_6->setObjectName("widget_6");
        gridLayout_6 = new QGridLayout(widget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        label_5 = new QLabel(widget_6);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(40, 0));
        label_5->setMaximumSize(QSize(40, 16777215));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        le_count = new QLineEdit(widget_6);
        le_count->setObjectName("le_count");
        le_count->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(le_count, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_6, 5, 0, 1, 1);

        widget = new QWidget(Dlg_AddProPassing);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(80, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        bin_save = new QPushButton(widget);
        bin_save->setObjectName("bin_save");
        bin_save->setMinimumSize(QSize(0, 30));
        bin_save->setFont(font1);

        gridLayout->addWidget(bin_save, 0, 0, 1, 1);

        bin_cancel = new QPushButton(widget);
        bin_cancel->setObjectName("bin_cancel");
        bin_cancel->setMinimumSize(QSize(0, 30));
        bin_cancel->setFont(font1);

        gridLayout->addWidget(bin_cancel, 0, 2, 1, 1);

        gridLayout->setColumnStretch(0, 1);

        gridLayout_7->addWidget(widget, 6, 0, 1, 1);


        retranslateUi(Dlg_AddProPassing);

        QMetaObject::connectSlotsByName(Dlg_AddProPassing);
    } // setupUi

    void retranslateUi(QDialog *Dlg_AddProPassing)
    {
        Dlg_AddProPassing->setWindowTitle(QCoreApplication::translate("Dlg_AddProPassing", "\350\266\205\345\270\202\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        Dlg_AddProPassing->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        le_title->setText(QCoreApplication::translate("Dlg_AddProPassing", "\346\267\273\345\212\240\350\256\242\345\215\225", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_AddProPassing", "\347\274\226\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("Dlg_AddProPassing", "\345\220\215\347\247\260", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_AddProPassing", "\347\261\273\345\236\213", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_AddProPassing", "\344\273\267\346\240\274", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_AddProPassing", "\346\225\260\351\207\217", nullptr));
        bin_save->setText(QCoreApplication::translate("Dlg_AddProPassing", "\347\241\256\345\256\232", nullptr));
        bin_cancel->setText(QCoreApplication::translate("Dlg_AddProPassing", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_AddProPassing: public Ui_Dlg_AddProPassing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDPROPASSING_H
