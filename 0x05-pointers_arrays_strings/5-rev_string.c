/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int i = 0;
	int len = 0;

	/* Calculate length of the string*/
	while (s[i++])
		len++;

	/* Reviersing the string */
	for (i = len - 1; i >= len / 2; i--)
	{
		char temp = s[len - i - 1];

		s[len - i - 1] = s[i];
		s[i] = temp;
	}
}
