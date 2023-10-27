#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: Index at which to clear the bit.
 *
 * Return: 1 if the operation is successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range for the data type */
	if (index > (sizeof(*n) * 8 - 1))
		return (-1);

	/* Use bitwise AND operation with the complement of a left-shifted 1 at the index */
	*n &= ~(1 << index);

	return (1); /* Return 1 to indicate success */
}
