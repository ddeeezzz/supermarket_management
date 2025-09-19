QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dlg_addpro.cpp \
    dlg_addpropassing.cpp \
    dlg_adduser.cpp \
    dlg_ispass.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow_ispass.cpp \
    mainwindow_userstab.cpp \
    page_lolgin.cpp \
    page_personalcenter.cpp \
    prosql.cpp

HEADERS += \
    dlg_addpro.h \
    dlg_addpropassing.h \
    dlg_adduser.h \
    dlg_ispass.h \
    hoveredrowitemdelegate.h \
    mainwindow.h \
    mainwindow_ispass.h \
    mainwindow_userstab.h \
    page_lolgin.h \
    page_personalcenter.h \
    prosql.h

FORMS += \
    dlg_addpro.ui \
    dlg_addpropassing.ui \
    dlg_adduser.ui \
    dlg_ispass.ui \
    mainwindow.ui \
    mainwindow_ispass.ui \
    mainwindow_userstab.ui \
    page_lolgin.ui \
    page_personalcenter.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
