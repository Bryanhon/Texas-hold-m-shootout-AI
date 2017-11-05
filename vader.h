#ifndef VADER_H
#define VADER_H

#include <player.h>

class Vader : public Player
{
	const char *getName() const			{ return( "VADER !!!!!!!!" ); }

	int willYouRaise( unsigned int totalBet )
	{
		PokerRank myHandRank = getHand().getMyRank();
		PokerRank tableRank = getCommunityRank();
		if( myHandRank.getCategory() >= THREE_OF_A_KIND )
		{
			if( tableRank.getCategory() == myHandRank.getCategory() )
			{
				return( 0 );
			}
			return( getChips() );
		}
		else if( myHandRank.getCategory() >= TWO_PAIR )
		{
			if( tableRank.getCategory() == myHandRank.getCategory() )
			{
				return( 0 );
			}
			return( totalBet - getBet() ); //raise as much as raised :-D troll
		}
		return( 0 );
	}
};

#endif // VADER_H
