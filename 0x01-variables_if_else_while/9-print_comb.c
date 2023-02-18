/* Auth: Rosita J Uqueio */

#include <stdio.h>

/**
 * main - program that prints all possible
 *  combinations of single-digit numbers.
 *   separated by ,, followed by a space
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i) + '0');

		if (i == 9)
			break;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
