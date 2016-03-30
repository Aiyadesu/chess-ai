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
