#include <stdlib.h>
#include "main.h" 

/**
 * malloc_checked- allocates memory using malloc.
 * @ptr: pointer
 * if malloc fails, the malloc_checked function value 98
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
void *ptr = malloc(b);

if (ptr == NUL) 
{
exit (98);
}
else return (ptr);
}
