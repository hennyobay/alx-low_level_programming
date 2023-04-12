#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *             to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The necessary number of bits to change to get from n to m.
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