#ifndef KNIGHT_H
#define KNIGHT_H

#include "chesspiece.h"


class Knight : public ChessPiece

{

public:

    Knight();
    Knight(Colour colour);
    QString getPosition();
    Knight* getPiece();


private:

    QString position;
    Colour colour;
    Value value;


};


#endif // KNIGHT_H
