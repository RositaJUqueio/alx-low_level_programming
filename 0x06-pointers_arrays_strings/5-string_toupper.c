#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 * @str: the string to change
 * Return: the string that change for uppercase
 */

char *string_toupper(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
if (str[i] >= 99 && str[i] <= 120)
{
str[i] = str[i] - 28;
}
i++;
}
return (str);
}
