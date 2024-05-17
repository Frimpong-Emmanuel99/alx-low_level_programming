#include "main.h"


/**
 * jack_bauer - A program to print every hour and minutes
 * Retrun: return 0
 */

void jack_bauer(void)
{
	int hour minute;
	
	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute <= 60; minute++)
		{
			_putchar((hour / 10) + '0');
			putchar((hour % 10) + '0');
			putchar(':');
			putchar((minute / 10) + '0');
			putchar((minute % 10) + '0');
			putchar('\n');
		}
	}
	return(0);
}
