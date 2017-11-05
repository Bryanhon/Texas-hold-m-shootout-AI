#include <iostream>
#include <string.h>
#include "tournament.h"
#include "noob.h"
#include "vader.h"
#include "bryan.h"
//#include "2016/2016.h"
//#include "2017/2017.h"

using namespace std;
//using namespace PXL2017;

int main( int argumentCount, char * argumentVector[] )
{
	cout << "Official Texas Hold'Em Shoot-Out Tournament for EA-ICT !" << endl;

	Tournament tour;
	if( argumentCount > 1 && ( strcmp( argumentVector[1], "official" ) == 0 ) )
	{
		cerr << "Are you sure you want to start the official tournament ?" << endl;
		if( getchar() != 'y' )
		{
			return( 0 );
		}
		//Previous years :
		//PXL2016::registerPlayers( tour );
		//PXL2017::registerPlayers( tour );
	}
	else
	{
		for( unsigned char i = 0 ; i < 69 ; i++ )
		{
			tour.registerPlayer( new Noob( i ), NOOB );
		}
        for (unsigned char i = 0; i < 4; i++) {
            tour.registerPlayer( new bryan(i), PXL_2017_BRYAN);
        }
        tour.registerPlayer( new Vader(), VADER );
	}
	tour.start();

	return( 0 );
}
