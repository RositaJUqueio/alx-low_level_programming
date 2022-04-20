#include "main.h"

/**
 * main - swap_int
 * function that swaps the values of two integers.
 * Return: o incicates sucessful program
 */

void swap_int(int *a, int *b)
{
int aux;

aux = *a;
*a = *b;
*b = aux;
}
