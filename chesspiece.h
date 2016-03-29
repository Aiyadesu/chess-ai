#ifndef CHESSPIECE_H
#define CHESSPIECE_H
#include <QString>

class ChessPiece
{
public:
    ChessPiece();
    //virtual QString capture() = 0;
    virtual QString getPosition();
    //virtual QString setPosition() = 0;

private:
    QString position;
    int value;
};

#endif // CHESSPIECE_H
