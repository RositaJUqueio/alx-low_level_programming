#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- of chars,& initializes it with a specific char.
 * Returns NULL if size = 0
 * @size: unsigned int type
 * @c: char type
 * Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;

if (size == 0)
{
return (NULL);
}

s = malloc((size) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}

