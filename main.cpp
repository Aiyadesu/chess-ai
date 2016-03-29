#include <QCoreApplication>
#include <iostream>
#include "chesspiece.h"
#include "pawn.h"
#include <QString>
#include "board.h"

using namespace std;

int main(int argc, char *argv[])
{

    Board* boardptr = new Board();
    QCoreApplication a(argc, argv);


    return a.exec();
}

