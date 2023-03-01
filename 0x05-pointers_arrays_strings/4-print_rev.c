/* Auth: Rosita J uqueio */

#include "main.h"

/**
 * print_rev - prints a string,
 *  in reverse, followed by a new line.
 *  @s: sring to be reversed.
 */

void print_rev(char *s)
{
	int len, i;

	i = 0;
	len = 0; /* string length */

	while (s[i++] != 0)
		len++; /* len now stores the number of chars in s*/

	for (i = len - 1; i >= 0; i--)
		/* I is the characters */
		_putchar(s[i]);

	_putchar('\n');


}
