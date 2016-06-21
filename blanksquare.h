#ifndef BLANKSQUARE_H
#define BLANKSQUARE_H

#include "chesspiece.h"


class BlankSquare : public ChessPiece
{

public:

    BlankSquare();
    BlankSquare* getPiece();

private:

    QString position;
    Colour colour;
    Value value;

};

#endif // BLANKSQUARE_H
