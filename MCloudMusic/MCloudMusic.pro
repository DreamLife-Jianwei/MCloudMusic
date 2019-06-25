#-------------------------------------------------
#
# Project created by QtCreator 2018-06-30T11:10:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MCloudMusic
TEMPLATE = app
RC_ICONS = ./images/logo.ico

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    musicform.cpp \
    playlistform.cpp \
    personform.cpp \
    messageform.cpp \
    messageform_sixin_item.cpp \
    picturewallform.cpp

HEADERS += \
        mainwindow.h \
    musicform.h \
    playlistform.h \
    personform.h \
    messageform.h \
    messageform_sixin_item.h \
    picturewallform.h

FORMS += \
        mainwindow.ui \
    musicform.ui \
    playlistform.ui \
    personform.ui \
    messageform.ui \
    messageform_sixin_item.ui \
    picturewallform.ui

RESOURCES += \
    resource.qrc
