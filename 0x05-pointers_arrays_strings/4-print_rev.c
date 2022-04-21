#include "main.h"

/**
 * print_rev - function prints a string, in reverse, followed by a new line.
 * @s: pointer to the string to print
 * Return: void (code sucesess)
 */

void print_rev(char *s)
{
int a = 0;

while(s[a])
a++;

while(a--)
{
_putchar(s[a]);
}

_putchar('\n');

}


