#ifndef BRYAN_H
#define BRYAN_H

//#include <fstream>
#include <time.h>
//#include <thread>
#include "player.h"
#include "game.h"

class bryan : public Player {

public:
    bryan(unsigned char instance);
    ~bryan();
    const char *getName() const;
    int willYouRaise(unsigned int totalBet);

protected:

private:
    unsigned int mode = 0;
    Game game;

};

#endif // BRYAN_H
