#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: Value to be raised.
 * @y: Power to raise x to.
 *
 * Return: Result of the power.
 */
int _pow_recursion(int x, int y)
{
	/* Check if the power y is negative, return -1 for invalid input */
	if (y < 0)
		return (-1);
	/* If the power y is 0, return 1 as any number raised to 0 is 1 */
	if (y == 0)
		return (1);
	/* Calculate and return the power using recursion */
	return (x * _pow_recursion(x, y - 1));
}

