#ifndef ROOK_H
#define ROOK_H

#include "chesspiece.h"


class Rook : public ChessPiece

{

public:

    Rook();
    Rook(Colour colour);
    QString getPosition();
    Rook* getPiece();
    void getColour();


private:

    int position;
    Colour colour;
    Value value;


};


#endif // ROOK_H
