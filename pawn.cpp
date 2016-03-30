#include "pawn.h"


Pawn::Pawn()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


Pawn::Pawn(Colour colour)
{

    position = NO_POSITION;
    this->colour = colour;
    value = PAWN;

}
