/* Auth: Rosita J Uqueio */

#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}
for (upper = 65; upper <= 90; upper++)
{
	putchar(upper);
}

putchar('\n');
return (0);
}
