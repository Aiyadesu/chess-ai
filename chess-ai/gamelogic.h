#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include "chesspiece.h"

class GameLogic
{

public:
    GameLogic();
    void Start();

private:

    bool playerPriority;
    bool gameOver;
    int turn;

};

#endif // GAMELOGIC_H
