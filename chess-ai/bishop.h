#ifndef BISHOP_H
#define BISHOP_H

#include "chesspiece.h"


class Bishop : public ChessPiece

{

public:

    Bishop();
    Bishop(Colour colour);
    Bishop* getPiece();


private:

    QString position;
    Colour colour;
    Value value;


};


#endif // BISHOP_H
