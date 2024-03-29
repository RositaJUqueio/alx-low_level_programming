/* Auth: Rosita J uqueio */

#include <stdio.h>

/**
 * main - prints all possible different
 *  combinations of two digits.
 *  separated by ',' followed by a space.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
				break;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
