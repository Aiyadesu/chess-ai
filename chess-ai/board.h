#ifndef BOARD_H
#define BOARD_H

#define LENGTH 7

#include <QList>
#include <QString>
#include <QDebug>

#include "chesspiece.h"


class Board

{

public:

    Board();


private:

    QList<ChessPiece*> board;
    //QList<ChessPiece*> whitePieces;
    //QList<ChessPiece*> blackPieces;

    // Support functions
    int IndexAt(int row, int column);


};


#endif // BOARD_H
