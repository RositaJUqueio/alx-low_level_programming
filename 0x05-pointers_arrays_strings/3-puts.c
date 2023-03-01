/* Auth: Rosiat J uqueio */

#include "main.h"

/**
 * _puts - prints a string,
 *  followed by a new line, to stdout.
 * @str: sting to be printed.
 */

void _puts(char *str)
{
	while (*str != 0)
		/* checks if value  pointed to by str is not equal to 0*/
		_putchar(*str++);

	_putchar('\n');
}
