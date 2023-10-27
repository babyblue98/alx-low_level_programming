#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to change
 * to transform one number into another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits that need to be changed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	/* Iterate through the bits and count the differing bits */
	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			countbit++;
	}

	return (countbit); /* Return the count of differing bits */
}
