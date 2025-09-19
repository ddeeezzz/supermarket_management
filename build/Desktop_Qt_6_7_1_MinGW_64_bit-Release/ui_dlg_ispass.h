/********************************************************************************
** Form generated from reading UI file 'dlg_ispass.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ISPASS_H
#define UI_DLG_ISPASS_H

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

class Ui_Dlg_IsPass
{
public:
    QGridLayout *gridLayout_7;
    QWidget *widget_4;
    QGridLayout *gridLayout_5;
    QLineEdit *le_type;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_9;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *le_proid;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *le_title;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *widget_6;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLineEdit *le_count;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_5;
    QGridLayout *gridLayout_4;
    QLineEdit *le_price;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *le_name;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_6;

    void setupUi(QDialog *Dlg_IsPass)
    {
        if (Dlg_IsPass->objectName().isEmpty())
            Dlg_IsPass->setObjectName("Dlg_IsPass");
        Dlg_IsPass->resize(311, 410);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(14);
        Dlg_IsPass->setFont(font);
        gridLayout_7 = new QGridLayout(Dlg_IsPass);
        gridLayout_7->setObjectName("gridLayout_7");
        widget_4 = new QWidget(Dlg_IsPass);
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
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_4, 3, 0, 1, 1);

        widget_2 = new QWidget(Dlg_IsPass);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(40, 0));
        label_2->setMaximumSize(QSize(40, 16777215));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        le_proid = new QLineEdit(widget_2);
        le_proid->setObjectName("le_proid");
        le_proid->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(le_proid, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_2, 1, 0, 1, 1);

        widget_7 = new QWidget(Dlg_IsPass);
        widget_7->setObjectName("widget_7");
        horizontalLayout = new QHBoxLayout(widget_7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_4 = new QSpacerItem(88, 18, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        le_title = new QLabel(widget_7);
        le_title->setObjectName("le_title");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font1.setPointSize(18);
        le_title->setFont(font1);
        le_title->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(le_title);

        horizontalSpacer_5 = new QSpacerItem(82, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout_7->addWidget(widget_7, 0, 0, 1, 1);

        widget = new QWidget(Dlg_IsPass);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(80, 30));
        pushButton_2->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(80, 30));
        pushButton->setMaximumSize(QSize(80, 30));

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);


        gridLayout_7->addWidget(widget, 7, 0, 1, 1);

        widget_6 = new QWidget(Dlg_IsPass);
        widget_6->setObjectName("widget_6");
        gridLayout_6 = new QGridLayout(widget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        label_5 = new QLabel(widget_6);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(40, 0));
        label_5->setMaximumSize(QSize(40, 16777215));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 0, 0, 1, 1);

        le_count = new QLineEdit(widget_6);
        le_count->setObjectName("le_count");
        le_count->setMinimumSize(QSize(0, 30));

        gridLayout_6->addWidget(le_count, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_10, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_6, 5, 0, 1, 1);

        widget_5 = new QWidget(Dlg_IsPass);
        widget_5->setObjectName("widget_5");
        gridLayout_4 = new QGridLayout(widget_5);
        gridLayout_4->setObjectName("gridLayout_4");
        le_price = new QLineEdit(widget_5);
        le_price->setObjectName("le_price");
        le_price->setMinimumSize(QSize(0, 30));

        gridLayout_4->addWidget(le_price, 0, 1, 1, 1);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(40, 0));
        label_4->setMaximumSize(QSize(40, 16777215));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_7, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_5, 4, 0, 1, 1);

        widget_3 = new QWidget(Dlg_IsPass);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(widget_3);
        label->setObjectName("label");
        label->setMinimumSize(QSize(40, 0));
        label->setMaximumSize(QSize(40, 16777215));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        le_name = new QLineEdit(widget_3);
        le_name->setObjectName("le_name");
        le_name->setMinimumSize(QSize(0, 30));

        gridLayout_3->addWidget(le_name, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(38, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        gridLayout_7->addWidget(widget_3, 2, 0, 1, 1);

        label_6 = new QLabel(Dlg_IsPass);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_6, 6, 0, 1, 1);

        gridLayout_7->setRowStretch(0, 2);
        gridLayout_7->setRowStretch(1, 2);
        gridLayout_7->setRowStretch(2, 2);
        gridLayout_7->setRowStretch(3, 2);
        gridLayout_7->setRowStretch(4, 2);
        gridLayout_7->setRowStretch(5, 2);
        gridLayout_7->setRowStretch(6, 1);
        gridLayout_7->setRowStretch(7, 2);

        retranslateUi(Dlg_IsPass);

        QMetaObject::connectSlotsByName(Dlg_IsPass);
    } // setupUi

    void retranslateUi(QDialog *Dlg_IsPass)
    {
        Dlg_IsPass->setWindowTitle(QCoreApplication::translate("Dlg_IsPass", "\350\266\205\345\270\202\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_3->setText(QCoreApplication::translate("Dlg_IsPass", "\347\261\273\345\236\213", nullptr));
        label_2->setText(QCoreApplication::translate("Dlg_IsPass", "\347\274\226\347\240\201", nullptr));
        le_title->setText(QCoreApplication::translate("Dlg_IsPass", "\345\256\241\346\240\270", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dlg_IsPass", "\345\210\240\351\231\244", nullptr));
        pushButton->setText(QCoreApplication::translate("Dlg_IsPass", "\351\200\232\350\277\207", nullptr));
        label_5->setText(QCoreApplication::translate("Dlg_IsPass", "\346\225\260\351\207\217", nullptr));
        label_4->setText(QCoreApplication::translate("Dlg_IsPass", "\345\215\225\344\273\267", nullptr));
        label->setText(QCoreApplication::translate("Dlg_IsPass", "\345\220\215\347\247\260", nullptr));
        label_6->setText(QCoreApplication::translate("Dlg_IsPass", "\346\200\273\344\273\267\357\274\232.......\345\205\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_IsPass: public Ui_Dlg_IsPass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ISPASS_H
