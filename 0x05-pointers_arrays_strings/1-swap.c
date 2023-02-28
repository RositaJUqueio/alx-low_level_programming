/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer to be swapped
 * @b: second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
