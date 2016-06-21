#include "rook.h"


Rook::Rook()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


Rook::Rook(Colour colour)
{

    position = NO_POSITION;
    this->colour = colour;
    value = ROOK;

}

Rook* Rook::getPiece()
{
    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;
}

void Rook::getColour()
{
    std::cout << "Colour is " << this->colour << std::endl;
}
