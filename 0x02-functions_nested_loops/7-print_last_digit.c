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
	int last_digit = j % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
