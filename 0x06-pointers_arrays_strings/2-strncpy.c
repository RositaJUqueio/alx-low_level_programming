#include "main.h"

/**
 * _strncpy - function copies the string
 * @dest: is an array that returns
 * @src: the pointer that receive the string
 * @n: times to interate
 * Return: the parameter dest.
 */

char *_strncpy(char *dest, char *src, int n);
{
int i = 0, j = 0;

while (src[j])
{
j++;
}

while (i < n && src[j])
{
dest[i] = src[j];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
