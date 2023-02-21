/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 *  in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char i, alpha;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}

		_putchar('\n');
	}
}
