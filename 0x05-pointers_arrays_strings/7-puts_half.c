#include "main.h"

/**
 * puts_half - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{

int len, n, b;

len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
for (b = len / 2; str[b] != '\0'; b++)
{
_putchar(str[b]);
}

}
else if (len % 2)
{
for (n = (len - 1) / 2; n < len - 1; n++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
