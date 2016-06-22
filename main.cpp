//#include <QCoreApplication>

#include <iostream>
#include "chesspiece.h"
#include "pawn.h"
#include <QString>
#include "board.h"
#include "blanksquare.h"

#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQuickView>

using namespace std;

int main(int argc, char *argv[])
{

    // TODO: testing
    //Board* boardptr = new Board();

    Board* boardptr;

    QGuiApplication a(argc, argv); // GUI application

    //QQuickView view;
    //view.setSource(QUrl(QStringLiteral("qrc:/GameWindow.qml")));
    //view.show();

    QQmlApplicationEngine engine;
//    engine.rootContext()->setContextProperty("Testing", boardptr);
  //  QmlComponent component(&engine, QUrl::fromLocalFile("main.qml"));
    //component.create();

    // TODO: testing
    qmlRegisterType<BlankSquare>("BlankSquare", 1, 0, "BlankSquare");
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));




    return a.exec();
}

