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
	_putchar(j % 10);
	return (j % 10);
}
