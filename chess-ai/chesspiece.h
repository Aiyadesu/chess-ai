#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include <iostream>
#include <QString>
#include <QDebug>


enum Colour {

    COLOURLESS = -1,
    WHITE = 0,
    BLACK = 1

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
    int getPosition();
    Colour getColour();
    Value getValue();
    virtual ChessPiece* getPiece();
    void setPosition(int pRow, int pColumn);
    //virtual QString setPosition() = 0;
    const int NO_POSITION = -1;

private:

    int position;
    Colour colour;
    Value value;

    //TODO: ADD STATIC MEMBERS TO OTHER CHESS PIECES
    // AND CREATE AN ID MEMBER TOO BASED OFF THE STATIC MEMBER
    // THEN I CAN USE THE GET ID FUNCTION TO ACTUALLY
    // CHECK AND USE THE OBJECTS


};


#endif // CHESSPIECE_H
