/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int count, i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			/**
			 * i > 9, so we're getting the 10s digit(i / 10)
			 * getting the ones digit(i % 10)
			 */

		}
		_putchar('\n');
	}
}
