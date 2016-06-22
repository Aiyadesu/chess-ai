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

Pawn* Pawn::getPiece()
{
    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;
}
