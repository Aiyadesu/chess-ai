QT += core
QT += qml
QT += gui
QT += quick

TARGET = chess-ai
CONFIG -= console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    chesspiece.cpp \
    pawn.cpp \
    board.cpp \
    king.cpp \
    queen.cpp \
    rook.cpp \
    knight.cpp \
    bishop.cpp \
    blanksquare.cpp \
    gamelogic.cpp

HEADERS += \
    chesspiece.h \
    pawn.h \
    board.h \
    king.h \
    queen.h \
    rook.h \
    knight.h \
    bishop.h \
    blanksquare.h \
    gamelogic.h

QMAKE_CXXFLAGS += -std=c++0x

DISTFILES += \
    GameWindow.qml

RESOURCES += \
    qml.qrc
