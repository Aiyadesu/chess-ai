#ifndef KING_H
#define KING_H

#include "chesspiece.h"


class King : public ChessPiece

{

public:

    King();
    King(Colour colour);
    QString getPosition();
    King* getPiece();

// TODO: TEST
private:

    QString position;
    Colour colour;
    Value value;


};


#endif // KING_H
