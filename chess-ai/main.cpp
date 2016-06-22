//#include <QCoreApplication>

#include <iostream>
#include "chesspiece.h"
#include "pawn.h"
#include <QString>
#include "board.h"

#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQuickView>

using namespace std;

int main(int argc, char *argv[])
{

    Board* boardptr = new Board();

    QGuiApplication a(argc, argv); // GUI application

    //QQuickView view;
    //view.setSource(QUrl(QStringLiteral("qrc:/GameWindow.qml")));
    //view.show();

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/GameWindow.qml")));


    return a.exec();
}

