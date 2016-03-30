#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <iostream>
#include <QString>
#include <QDebug>


enum Colour {

    COLOURLESS = 0,
    WHITE = 1,
    BLACK = 2

};

enum Value {

    WORTHLESS = 0,
    PAWN = 1,
    BISHOP = 3,
    ROOK = 5,
    QUEEN = 9,
    KNIGHT = 34,
    KING = 420

};


class ChessPiece

{

public:

    ChessPiece();
    ChessPiece(Colour colour);
    //virtual QString capture() = 0;
    QString getPosition();
    //virtual QString setPosition() = 0;
    QString NO_POSITION = "Not placed on board yet!";


private:

    QString position;
    Colour colour;
    Value value;
    //static int numChessPieces;

    //TODO: ADD STATIC MEMBERS TO OTHER CHESS PIECES
    // AND CREATE AN ID MEMBER TOO BASED OFF THE STATIC MEMBER
    // THEN I CAN USE THE GET ID FUNCTION TO ACTUALLY
    // CHECK AND USE THE OBJECTS


};


#endif // CHESSPIECE_H
