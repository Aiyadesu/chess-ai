#include "knight.h"


Knight::Knight()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


Knight::Knight(Colour colour)
{

    position = NO_POSITION;
    this->colour = colour;
    value = KNIGHT;

}

Knight* Knight::getPiece()
{
    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;
}
