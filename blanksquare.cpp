#include "blanksquare.h"

BlankSquare::BlankSquare()
{

    position = NO_POSITION;
    colour = COLOURLESS;
    value = WORTHLESS;

}


BlankSquare* BlankSquare::getPiece()
{

    std::cout << "I am a " << this->colour << " of " << this->value << std::endl;
    return this;

}
