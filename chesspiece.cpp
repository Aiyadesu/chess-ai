#include "chesspiece.h"


int position;
Colour colour;
Value value;


ChessPiece::ChessPiece()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


int ChessPiece::getPosition()
{

    return position;

}


Colour ChessPiece::getColour()
{

    return colour;

}


Value ChessPiece::getValue()
{

    return value;

}


ChessPiece* ChessPiece::getPiece()
{
    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;
}


void ChessPiece::setPosition(int pRow, int pColumn)
{
    int row = pRow + 1;
    int column = pColumn +1;
    position = (8 * row) + column - 1;

}
