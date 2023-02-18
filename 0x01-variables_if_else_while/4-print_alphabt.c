/* Auth: Rosita J Uqueio */

#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * , followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
		if (alph != 'e' && alph != 'q')
			putchar(alph);
	}

	putchar('\n');
	return (0);
}
