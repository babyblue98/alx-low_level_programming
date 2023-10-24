#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to return the factorial from.
 *
 * Return: Factorial of n.
 */
int factorial(int n)
{
	/* Check if n is negative, return -1 for invalid input */
	if (n < 0)
		return (-1);
	/* If n is 0, return 1 as the factorial of 0 is 1 */
	if (n == 0)
		return (1);
	/* Calculate and return the factorial using recursion */
	return (n * factorial(n - 1));
}
