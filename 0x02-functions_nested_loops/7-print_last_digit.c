/* Auth: Rosita J uqueio */

#include "main.h"

/**
 *  print_last_digit -  prints the last digit of a number.
 * @j: value to take last digit from
 *
 *  Return: lastdigit.
 */

int print_last_digit(int j)
{
	int lastdigit = j % 10;

	_putchar(lastdigit + '0');
	return (j % 10);
}
