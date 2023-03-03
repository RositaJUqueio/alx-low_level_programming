/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * puts_half - prints half of a string,
 *  followed by a new line.
 * should print the second half of the string
 * @str: string to be evaluated.
 */

void puts_half(char *str)
{
	int i = 0, len = 0, n;

	/* calculate string length */
	while (str[i++])
		len++;

	if ((n % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	/* printing second half of string */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
