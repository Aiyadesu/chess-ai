// Definitions
#ifndef BOARD_H
#define BOARD_H

#define LENGTH 7

// Imports
#include <QList>
#include <QString>
#include <QDebug>

#include "chesspiece.h"


class Board
{
public:
    Board();

private:
    QList<QList<QString>> board;
    QList<ChessPiece> initialPosition;
    ChessPiece whiteCaptured;
    ChessPiece blackCaptured;

    void CreateWhitePieces();
    void CreateBlackPieces();

};

#endif // BOARD_H
