/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTreeWidget *treeWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *bin_exit;
    QWidget *widget_2;
    QLabel *label_3;
    QLabel *lb_username;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_3;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QPushButton *bin_simulation;
    QPushButton *bin_clear;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lb_cnt;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *bin_add;
    QPushButton *bin_update;
    QPushButton *bin_delete;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *le_search;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *bin_search;
    QTableWidget *tableWidget;
    QWidget *page_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(889, 586);
        MainWindow->setMinimumSize(QSize(889, 480));
        MainWindow->setMaximumSize(QSize(9999, 9999));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Pictures/Saved Pictures/wxyd.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgba(42, 58, 67, 240);"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(190, 300));
        treeWidget->setMaximumSize(QSize(190, 9999));
        treeWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(166, 199, 219, 150);\n"
"color: rgba(42, 58, 67, 240);\n"
"font: 11pt \"Microsoft YaHei UI\";"));
        treeWidget->header()->setVisible(false);

        gridLayout_2->addWidget(treeWidget, 1, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(800, 60));
        widget->setMaximumSize(QSize(9999, 60));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(42, 58, 67, 240);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(597, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        bin_exit = new QPushButton(widget);
        bin_exit->setObjectName("bin_exit");
        bin_exit->setMaximumSize(QSize(60, 16777215));
        QFont font1;
        font1.setPointSize(11);
        bin_exit->setFont(font1);
        bin_exit->setContextMenuPolicy(Qt::DefaultContextMenu);
        bin_exit->setStyleSheet(QString::fromUtf8("background-color: rgba(197, 225, 245, 150);\n"
"color: rgb(35, 42, 48);\n"
"hover:{background-color: rgba(55, 62, 76, 150);}\n"
""));

        gridLayout->addWidget(bin_exit, 0, 6, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(0, 50));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 30, 30));
        label_3->setMinimumSize(QSize(30, 30));
        label_3->setMaximumSize(QSize(30, 30));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/user.jpg);"));
        lb_username = new QLabel(widget_2);
        lb_username->setObjectName("lb_username");
        lb_username->setGeometry(QRect(60, 0, 161, 51));
        lb_username->setFont(font1);

        gridLayout->addWidget(widget_2, 0, 2, 1, 4);

        gridLayout->setColumnStretch(0, 4);
        gridLayout->setColumnStretch(1, 5);
        gridLayout->setColumnStretch(2, 4);

        gridLayout_2->addWidget(widget, 0, 0, 1, 3);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMaximumSize(QSize(9999, 9999));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgba(179, 198, 214, 100);\n"
"QStackedWidge QToolButton {background-color: rgb(34, 44, 51);}\n"
"color: rgb(220, 238, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_3 = new QGridLayout(page);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_4 = new QWidget(page);
        widget_4->setObjectName("widget_4");
        widget_4->setMinimumSize(QSize(0, 20));
        widget_4->setMaximumSize(QSize(16777214, 16777215));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        bin_simulation = new QPushButton(widget_4);
        bin_simulation->setObjectName("bin_simulation");
        bin_simulation->setMinimumSize(QSize(0, 25));
        bin_simulation->setMaximumSize(QSize(60, 25));
        bin_simulation->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(205, 216, 239);"));

        gridLayout_4->addWidget(bin_simulation, 0, 0, 1, 1);

        bin_clear = new QPushButton(widget_4);
        bin_clear->setObjectName("bin_clear");
        bin_clear->setMinimumSize(QSize(0, 25));
        bin_clear->setMaximumSize(QSize(60, 25));
        bin_clear->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(205, 216, 239);"));

        gridLayout_4->addWidget(bin_clear, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(461, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        lb_cnt = new QLabel(widget_4);
        lb_cnt->setObjectName("lb_cnt");
        lb_cnt->setStyleSheet(QString::fromUtf8("color: rgb(9, 29, 14);"));

        gridLayout_4->addWidget(lb_cnt, 0, 3, 1, 1);


        gridLayout_3->addWidget(widget_4, 5, 0, 1, 1);

        widget_3 = new QWidget(page);
        widget_3->setObjectName("widget_3");
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        bin_add = new QPushButton(widget_3);
        bin_add->setObjectName("bin_add");
        bin_add->setMaximumSize(QSize(60, 16777215));
        bin_add->setStyleSheet(QString::fromUtf8("color: rgb(12, 14, 19);\n"
"background-color: rgb(190, 205, 224);"));

        horizontalLayout->addWidget(bin_add);

        bin_update = new QPushButton(widget_3);
        bin_update->setObjectName("bin_update");
        bin_update->setMaximumSize(QSize(60, 16777215));
        bin_update->setStyleSheet(QString::fromUtf8("color: rgb(12, 14, 19);\n"
"background-color: rgb(190, 205, 224);"));

        horizontalLayout->addWidget(bin_update);

        bin_delete = new QPushButton(widget_3);
        bin_delete->setObjectName("bin_delete");
        bin_delete->setMaximumSize(QSize(60, 16777215));
        bin_delete->setStyleSheet(QString::fromUtf8("color: rgb(12, 14, 19);\n"
"background-color: rgb(190, 205, 224);"));

        horizontalLayout->addWidget(bin_delete);

        horizontalSpacer_3 = new QSpacerItem(28, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        le_search = new QLineEdit(widget_3);
        le_search->setObjectName("le_search");
        le_search->setStyleSheet(QString::fromUtf8("color: rgba(42, 58, 67, 240);\n"
"background-color: rgb(166, 199, 219);"));

        horizontalLayout->addWidget(le_search);

        horizontalSpacer_2 = new QSpacerItem(19, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        bin_search = new QPushButton(widget_3);
        bin_search->setObjectName("bin_search");
        bin_search->setMaximumSize(QSize(60, 16777215));
        bin_search->setStyleSheet(QString::fromUtf8("color: rgb(12, 14, 19);\n"
"background-color: rgb(190, 205, 224);"));

        horizontalLayout->addWidget(bin_search);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(4, 9);
        horizontalLayout->setStretch(6, 3);

        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        tableWidget = new QTableWidget(page);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setMaximumSize(QSize(9999, 9999));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableView::item:hover\n"
"{\n"
"	background-color: rgba(47, 70, 74, 50);\n"
"}\n"
"\n"
"QTableView::item:selected\n"
"{\n"
"	background-color: rgba(103, 141, 202, 150);\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"	background-color: rgb(192, 217, 231)\n"
"}\n"
"QHeaderView::section {\n"
"    color: white;\n"
"    font-size: 12px; /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217\344\270\27212\345\203\217\347\264\240 */\n"
"	font-widget: bold;\n"
"	padding-top: 5px;\n"
"	height: 20px;\n"
"	background-color: rgba(42, 58, 67, 240);\n"
"	border:0.2px solid rgb(67, 93, 101);\n"
"}\n"
"QTableWidget {\n"
"    border: 1px solid rgb(67, 93, 101);; /* \350\256\276\347\275\256\350\241\250\346\240\274\345\244\226\350\276\271\346\241\206\347\262\227\347\273\206\344\270\2721\345\203\217\347\264\240 */\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    color: black; /* \345\260\206\346\211\200\346\234\211\350\241\250\346\240\274\345\206\205\345\255\227\344\275\223\351\242\234\350\211\262\350\256\276\347\275\256"
                        "\344\270\272\351\273\221\350\211\262 */\n"
"}\n"
"\n"
"QTableWidget::item[row='0'] {\n"
"    color: white; /* \345\260\206\347\254\254\344\270\200\350\241\214\350\241\250\345\244\264\347\232\204\345\255\227\344\275\223\351\242\234\350\211\262\346\201\242\345\244\215\344\270\272\351\273\230\350\256\244\345\200\274 */\n"
"}\n"
""));
        tableWidget->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget->horizontalHeader()->setDefaultSectionSize(105);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(25);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);

        gridLayout_3->addWidget(tableWidget, 1, 0, 1, 2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 889, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\266\205\345\270\202\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\350\266\205\345\270\202\345\225\206\345\223\201\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        bin_exit->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        label_3->setText(QString());
        lb_username->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232admin", nullptr));
        bin_simulation->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        bin_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        lb_cnt->setText(QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201\346\225\260\351\207\217\357\274\232", nullptr));
        bin_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        bin_update->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        bin_delete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
#if QT_CONFIG(tooltip)
        le_search->setToolTip(QCoreApplication::translate("MainWindow", "\345\217\257\346\237\245\350\257\242\345\220\215\347\247\260", nullptr));
#endif // QT_CONFIG(tooltip)
        le_search->setText(QString());
        bin_search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
