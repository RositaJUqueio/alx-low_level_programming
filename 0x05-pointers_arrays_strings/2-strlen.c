#include "main.h"
#include <string.h>

/**
 * _strlen function that returns the length of a string. 
 * @s : is the input
 * Return: void (means code is sucessful)
 */

int _strlen(char *s)
{

int string_length = 0;

while (s[string_length])
{
string_length++;

}

return(string_length);
}
