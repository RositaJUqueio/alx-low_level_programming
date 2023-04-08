/* Auth: Rosita J Uqueio */
#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 * should range from 0 to 99
 *  two numbers should be separated by a space
 *
 *  Return: 0.
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			/* print the digits of the first number*/
			putchar ((i / 10) + '0');
			putchar ((i % 10) + '0');
			putchar (' ');

			/*print the digits of the second number */
			putchar ((j / 10) + '0');
			putchar ((j % 10) + '0');

			/*Add a comma & space after each pair except the last one*/
			if (i == 98 && j == 99)
				break;

			putchar (',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
