#include "bryan.h"

using namespace std;

bryan::bryan(unsigned char instance = 0)
:Player(instance)
{
    std::cout << "Bryan: I'm not trapped here with you, you are trapped here "
                 "with me..." << endl;
}

bryan::~bryan() // Mem leak? Never gets called?
{
    cout << "R.I.P" << endl;
}

const char *bryan::getName() const
{
    return("BRYAN >=3");
}

int bryan::willYouRaise(unsigned int totalBet)
{
    PokerRank handRank = getHand().getMyRank();
    PokerRank tableRank = getCommunityRank();
    cout << totalBet << "-------------------------------------------------------------------" << endl;

    if (table.getCommunityCards().empty() && (totalBet > game.getBlind() * 3)) {
            return -1;
        }

    return 0;
}

int bryan::gameState()
{
    // 0 = Pre-flop
    // 1 = Flop
    // 2 = Turn
    // 3 = River
    // -1 = error 404 shit not found
    if (table.getCommunityCards().empty())
        return 0;
    else if (table.getCommunityCards().at(2) != nullptr)
        return 1;
    else if (table.getCommunityCards().at(4) != nullptr)
        return 2;
    return -1;
}

//if( myHandRank.getCategory() >= THREE_OF_A_KIND )
//{
//    if( tableRank.getCategory() == myHandRank.getCategory() )
//    {
//        return( 0 );
//    }
//    return( getChips() );
//}
//else if( myHandRank.getCategory() >= TWO_PAIR )
//{
//    if( tableRank.getCategory() == myHandRank.getCategory() )
//    {
//        return( 0 );
//    }
//    return( totalBet - getBet() ); //raise as much as raised :-D troll
//}
//return( 0 );

