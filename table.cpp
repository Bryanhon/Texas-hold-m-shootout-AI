#include "table.h"

void Table::print( void )
{
	if( communityCards.empty() )
	{
		std::cout << "Empty table";
	}
	else
	{
		for( size_t i = 0 ; i < communityCards.size() ; i++ )
		{
			std::cout << communityCards.at( i );
		}
	}
}
