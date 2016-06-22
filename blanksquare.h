#ifndef BLANKSQUARE_H
#define BLANKSQUARE_H

#include "chesspiece.h"


class BlankSquare : public ChessPiece
{

    Q_OBJECT
    signals:
        void createdBlankSquare();

    public:

        BlankSquare();
        BlankSquare* getPiece();
        Value getValue();


    private:

        QString position;
        Colour colour;
        Value value;

        // TEST


};

#endif // BLANKSQUARE_H
