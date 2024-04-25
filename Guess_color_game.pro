QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcolorwindow.cpp \
    colordata.cpp \
    currentresultwindow.cpp \
    gamewindow.cpp \
    main.cpp \
    mainwindow.cpp \
    playermanager.cpp \
    usersscorewindow.cpp

HEADERS += \
    addcolorwindow.h \
    colordata.h \
    currentresultwindow.h \
    gamewindow.h \
    mainwindow.h \
    playermanager.h \
    usersscorewindow.h

FORMS += \
    addcolorwindow.ui \
    currentresultwindow.ui \
    gamewindow.ui \
    mainwindow.ui \
    usersscorewindow.ui

win32:RC_FILE = setIcon.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    colors/colors.json \
    images/Guess the color.png \
    players_score/players_score.json
