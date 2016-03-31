#include "queen.h"


Queen::Queen()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


Queen::Queen(Colour colour)
{

    position = NO_POSITION;
    this->colour = colour;
    value = QUEEN;

}

Queen* Queen::getPiece()
{
    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;
}
