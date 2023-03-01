/* Auth: Rosita J Uqueio */

#include <stdio.h>

/**
 * print_array - prints n elements of an
 *  array of integers, followed by a new line.
 *  @a: an array
 *  @n: the number of elements of the array to be printed.
 * Numbers must be separated by comma, followed by a space.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1) /* checking if eement is not last one arry */
		{
			printf(", ");
		}
	}
	printf("\n");
}

