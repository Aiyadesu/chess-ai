#include "bishop.h"


Bishop::Bishop()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


Bishop::Bishop(Colour colour)
{

    position = NO_POSITION;
    this->colour = colour;
    value = BISHOP;

}

Bishop* Bishop::getPiece()
{
    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;
}

