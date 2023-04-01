/* Auth: Rosita J uqueio */

#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0.
 */

void times_table(void)
{
	int i, mult, prod;

	for (i = 0; i <= 9; i++)
	{
		_purchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i *  mult;
			/* calculate the product of the current number and multiple */

			if (prod <= 9)
				_putchar(' ');
			/* if the product is single digit, print an extra space for formatting */
			else
				_putchar((prod / 10) + '0');
			/* if the product is two digits, print the first digit */
			_putchar((prod % 10) + '0'); /* print the second digit of the product */
		}
		_putchar('\n');
	}
}
