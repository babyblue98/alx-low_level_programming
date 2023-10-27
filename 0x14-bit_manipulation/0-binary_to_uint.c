#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number,
 * or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int num;

	num = 0;

	/* Check if the string is empty */
	if (!b)
		return (0);

	/* Iterate through the string to check for valid characters */
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0); /* Return 0 if any character is not '0' or '1' */
	}

	/* Loop through the string to convert binary to decimal */
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1; /* Left-shift the bits in num by 1 */
		if (b[a] == '1')
			num += 1; /* Add 1 to num if the current character is '1' */
	}

	return (num); /* Return the decimal value of the binary number */
}
