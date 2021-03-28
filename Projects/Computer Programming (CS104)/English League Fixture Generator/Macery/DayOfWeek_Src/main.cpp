/***************************************************************************
                          main.cpp  -  description
                             -------------------
    begin                : Sunday  July 7 11:13:38 GMT+8 2002
    copyright            : (C) 2002 by Jerry Jenkins
    email                : Jerry_J_Jenkins@hotmail.com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************
 *                                                                         *
 *   In the Gregorian calendar, which is widely used now, the year AD 1    *
 *   is directly preceded by the year 1 BC; a year 0 does not exist in     *
 *   this system. In contrast, astronomical reckoning indeed uses a year   *
 *   0. For the purpose of distinction, astronomical reckoning drops the   *
 *   symbols AD and BC and uses a plus or minus sign before the year       *
 *   instead. The astronomical year +1 therefore corresponds to the year   *
 *   AD 1, the year 0 corresponds to 1 BC, and the year -1 to 2 BC. For    *
 *   convenience, I'll use astronomical years in the program.              *
 *                                                                         *
 ***************************************************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <iostream.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

int		DayOfWeek( int nYear, int nMonth, int nDay );
int		CountOfFeb29( int nYear );
bool	IsLeapYear( int nYear );


int main(int argc, char *argv[])
{
	int		nYear, nMonth, nDay;
	const static char	aszWeekDayNames[][16] = {
		"Sunday", "Monday", "Tuesday", "Wednesday", "Thursay", "Friday", "Saturday"
	};
	printf( "Press CTRL+C to exit.\n\n" );
	while( 1 ) {
		printf( "Month,Day,Year\t: " );
		scanf( "%d,%d,%d", &nMonth, &nDay, &nYear );
		printf( "%d,%d,%d\t: %s\n\n",
				nMonth, nDay, nYear,
				aszWeekDayNames[ DayOfWeek( nYear, nMonth, nDay ) ] );
	}

	return EXIT_SUCCESS;
}

int		DayOfWeek( int nYear, int nMonth, int nDay )
{
	int			nDayOfWeek;
	const static int	pnDaysBeforeMonth[] = {
		 0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365
	};
	
	assert( nMonth > 0 && nMonth <= 12 );
	assert( nDay > 0 );
	assert( nDay <= ( pnDaysBeforeMonth[ nMonth+1 ] - pnDaysBeforeMonth[ nMonth ] )
		|| ( nMonth == 2 && nDay == 29 && IsLeapYear(nYear) )
		);
	
	/* the day of Jan 1, nYear */
	nDayOfWeek = 6 + nYear % 7 + CountOfFeb29(nYear) % 7 + 14;/* + 14 : makes nDayOfWeek >= 0 */
	
	/* the day of nMonth 1, nYear */
	nDayOfWeek += pnDaysBeforeMonth[ nMonth ];
	if( nMonth > 2 && IsLeapYear(nYear) )	nDayOfWeek++;
	
	/* the day of nMonth nDay, nYear */
	nDayOfWeek += nDay - 1;
	nDayOfWeek %= 7;
	
	return nDayOfWeek;
}

/*
 *	Count of days, which is Feb 29, from Jan 1, 0 to Jan 1, nYear
 *	There is no Feb 29 between Jan 1, 0 and Jan 1, -3, one between Jan 1, 0 and Jan 1, -4
 *	one between Jan 1, 0 and Jan 1, 3 AD, one between Jan 1, 0 and Jan 1, 4
 */
int		CountOfFeb29( int nYear )
{
	int		nCount = 0;
	if( nYear > 0 ) {
		nCount = 1;	/* Year 0 is a leap year */
		nYear--;/* Year nYear is not in the period */
	}
	nCount += nYear / 4 - nYear / 100 + nYear / 400;

	return nCount;
}

bool	IsLeapYear( int nYear )
{
	if( nYear % 4 != 0 )	return false;
	if( nYear % 100 != 0 )	return true;
	return ( nYear % 400 == 0 );
}

