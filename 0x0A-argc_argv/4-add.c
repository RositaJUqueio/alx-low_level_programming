/* Auth: Rosita J Uqueio */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * @argc: number of arguments passed to program.
 * @argv: array of pointer to arguments.
 *
 * Return: 1 if  number contains symbols that are not digits.
 *       : 0 at success.
 */

int main(int argc, char *argv[])
{
	int num, result, digit = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result = result + atoi(argv[num]);
	}

	printf("%d\n", result);
	return (0);
}
