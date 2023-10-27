#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set.
 * @index: Index at which to set the bit.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	/* Check if the index is within the valid range for the data type */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* Calculate the bit to set using left shift */
	setbit = 1 << index;

	/* Perform a bitwise OR operation to set the bit at the given index to 1 */
	*n = *n | setbit;

	return (1); /* Return 1 to indicate success */
}
