/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{

#define hour1 (hour / 10)
#define hour2 (hour % 10)
#define min1 (min / 10)
#define min2 (min % 10)

	/*
	 * hour / 10 gives us the 10s value of first hour digit
	 * hour % 10 gives us the 1s value of second hour digit
	 * same method for minutes
	 */

	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hour1 + '0');
			_putchar(hour2 + '0');
			_putchar(':');
			_putchar(min1 + '0');
			_putchar(min2 + '0');
			_putchar('\n');
		}
	}
}
