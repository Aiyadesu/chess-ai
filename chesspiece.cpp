#include <iostream>
#include "chesspiece.h"
#include <QString>
using namespace std;

QString position;
int value;

ChessPiece::ChessPiece()
{
    position = "dicks";
    cout << "dicks" << endl;
}

QString ChessPiece::getPosition()
{
    cout << "dicks 2";
    return position;
}
