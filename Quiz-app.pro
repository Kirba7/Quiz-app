QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    "game logic"/gamecontroller.cpp \
    "game logic"/gamesession.cpp \
    main.cpp \
    models/answer.cpp \
    models/player.cpp \
    models/question.cpp \
    network/client.cpp \
    network/clientconnection.cpp \
    network/message.cpp \
    network/messageserializer.cpp \
    network/server.cpp \
    ui/settings.cpp \
    ui/titlebar.cpp \
    ui/gamewindow.cpp \
    ui/lobbywindow.cpp \
    ui/mainmenu.cpp \
    ui/resultwindow.cpp \
    ui/window.cpp

HEADERS += \
    "game logic"/gamecontroller.h \
    "game logic"/gamesession.h \
    models/answer.h \
    models/player.h \
    models/question.h \
    network/client.h \
    network/clientconnection.h \
    network/message.h \
    network/messageserializer.h \
    network/server.h \
    ui/settings.h \
    ui/titlebar.h \
    ui/gamewindow.h \
    ui/lobbywindow.h \
    ui/mainmenu.h \
    ui/resultwindow.h \
    ui/window.h


FORMS += \
    ui/settings.ui \
    ui/gamewindow.ui \
    ui/lobbywindow.ui \
    ui/mainmenu.ui \
    ui/resultwindow.ui \
    ui/titlebar.ui \
    ui/window.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
