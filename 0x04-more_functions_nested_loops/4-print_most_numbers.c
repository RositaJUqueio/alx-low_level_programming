/* Auth: Rosita J uqueio */

#include "main.h"

/**
 * print_most_numbers -  prints the numbers,
 *  from 0 to 9, followed by a new line.
 *   not print 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;

		else
			_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
