#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check the bits in.
 * @index: Index at which to check the bit.
 *
 * Return: Value of the bit at the specified index, or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	/* Check if the index is within the valid range for the data type */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* Calculate the position of the bit to check using left shift */
	divisor = 1 << index;

	/* Perform a bitwise AND operation to determine the value of the bit */
	check = n & divisor;
	if (check == divisor)
		return (1); /* Return 1 if the bit is 1 at the given index */
	return (0); /* Return 0 if the bit is 0 at the given index */
}
