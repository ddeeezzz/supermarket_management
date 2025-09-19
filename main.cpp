#include "mainwindow.h"
#include <QApplication>
// #include <QFont>
#include "prosql.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // // 设置全局字体为宋体
    // QFont font("宋体");
    // QApplication::setFont(font);

    MainWindow w;

    proSql sql;
    return a.exec();
}
