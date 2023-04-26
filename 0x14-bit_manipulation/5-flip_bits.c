<<<<<<< HEAD
/* Auth: Rosita J Uqueio */

#include "main.h"

/**
 * flip_bits - returns the number of bits you
 * need to flip to get from one number to another.
 * @n: 
 * @m:
 *
 * Return: e number of bits.
 */
=======
/* Auth: Rosita J Uqueio*/
#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor = n ^ m, bits = 0;

while (xor > 0)
{
bits += (xor & 1);
xor >>= 1;
}

return (bits);
}
>>>>>>> fc0e80c6104219a13a8b16faedf8aaa9c86526f2
