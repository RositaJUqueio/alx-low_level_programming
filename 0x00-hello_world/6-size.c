/* 
 * file: 6-size.c
 * Auth: Rosita J Uqueio
 */

#include <stdio.h>

/**
 * main - Prints  size of various types on 
 *  the computer it is compiled and run on.
 *
 * Return: 0.
 */

int main()
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));

	return (0);
}
