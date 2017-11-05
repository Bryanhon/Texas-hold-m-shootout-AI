#ifndef BRYAN_H
#define BRYAN_H

//#include <fstream>
#include <time.h>
//#include <thread>
#include "player.h"
#include "game.h"
#include "table.h"

class bryan : public Player {

public:
    bryan(unsigned char instance);
    ~bryan();
    const char *getName() const;
    int willYouRaise(unsigned int totalBet);
    int gameState(); //returns the state of the game

protected:

private:
    unsigned int mode = 0;
    Game game;
    Table table;

};

#endif // BRYAN_H
