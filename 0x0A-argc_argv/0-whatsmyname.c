/* Auth: Rosita J Uqueio */

#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 *  you rename the program, it will print the new name,
 * @argc: number of characters
 * @argv: array containing names of objects passed
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s \n", argv[i]);

	return (0);
}
