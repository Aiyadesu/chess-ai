QT += core
QT -= gui

TARGET = chess-ai
CONFIG += console
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
    bishop.cpp

HEADERS += \
    chesspiece.h \
    pawn.h \
    board.h \
    king.h \
    queen.h \
    rook.h \
    knight.h \
    bishop.h

QMAKE_CXXFLAGS += -std=c++0x
