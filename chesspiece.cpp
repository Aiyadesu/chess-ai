#include "chesspiece.h"


QString position;
Colour colour;
Value value;


ChessPiece::ChessPiece()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


QString ChessPiece::getPosition()
{
    std::cout << "dicks" << std::endl;
    return position;
}
