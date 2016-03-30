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

    QList<QList<ChessPiece>> board;
    QList<ChessPiece> pieces;
    ChessPiece whiteCaptured;
    ChessPiece blackCaptured;

    void PieceCheck();


};


#endif // BOARD_H
