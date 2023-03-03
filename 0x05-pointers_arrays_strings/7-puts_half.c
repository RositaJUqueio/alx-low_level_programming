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
	int i, n, len = 0;

	/* calculate string length */
	while (str[i++])
		len++;

	/* find position where second half of string is */
	n = (len - 1) / 2 + 1;

	/* printing second half of string */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
