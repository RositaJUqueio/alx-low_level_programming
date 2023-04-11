/*Auth: Rosita J Uqueio */

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: ineger to get bit from.
 * @index: position to retrieve the bit from.
 *
 * Return: the value of the bit at index index
 *          -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
	/*retrieve the value of the bit at the specified index */

	if (index >= sizeof(unsigned long int) * 8)
		/*we multiply the size in bytes by 8 to get the size in bits*/
		return (-1)
}
