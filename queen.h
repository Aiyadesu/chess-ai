#ifndef QUEEN_H
#define QUEEN_H

#include "chesspiece.h"


class Queen : public ChessPiece

{

public:

    Queen();
    Queen(Colour colour);
    QString getPosition();


private:

    QString position;
    Colour colour;
    Value value;


};


#endif // QUEEN_H
