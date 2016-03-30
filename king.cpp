#include "king.h"


King::King()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


King::King(Colour colour)
{

    position = NO_POSITION;
    this->colour = colour;
    value = KING;

}
