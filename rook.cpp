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
