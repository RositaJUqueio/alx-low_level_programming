/* Auth: Rosita J uqueio */

#define "main.h"

/**
 *  print_last_digit -  prints the last digit of a number.
 * @j: value to take last digit from
 *
 *  Return: lastdigit.
 */

int print_last_digit(int j)
{
#define lastdigit (j % 10)

	_putchar(lastdigit);
	return (lastdigit);
}
