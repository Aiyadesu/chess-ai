#ifndef PAWN_H
#define PAWN_H

#include "chesspiece.h"


class Pawn : public ChessPiece

{

public:

    Pawn();
    Pawn(Colour colour);
    QString getPosition();
    Pawn* getPiece();


private:

    QString position;
    Colour colour;
    Value value;


};


#endif // PAWN_H
