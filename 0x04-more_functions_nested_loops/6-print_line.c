/* Auth: Rosita J uqueio */

#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times the character _ should be printed.
 * line should end with a \n
 * If n is 0 or less, the function should only print \n
 */

void print_line(int n)
{
	int lines;

	if (n > 0)
	{
		for (lines = 1; lines <= n; lines++)
		{
			_putchar('_');
		}
	}
	else
	{
		putchar('\n');
	}
	_putchar('\n');
}
