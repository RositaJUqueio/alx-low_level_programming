/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 *  followed by a new line. must be printed in order
 *  Numbers must be separated by a comma, followed by a space.
 *  @n: first number to be printed.
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d", n);
	}
}
