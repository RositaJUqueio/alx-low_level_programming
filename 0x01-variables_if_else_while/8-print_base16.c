/* Auth: Rosita J uqueio */

#include <stdio.h>

/**
 * main -  prints all the numbers of base 16 in lowercase,
 *  followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	char lower;

	for (i = 0; i < 10; i++)
		putchar((i) + '0');
	/**
	 * putchar outputs chars,thus the
	 *  + '0' gives i the ASCII code for char
	 */

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');
	return (0);
}
