#include "main.h"

/* Prototype for the helper function */
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root.
 */
int _sqrt_recursion(int n)
{
	/* Check if n is negative, return -1 for invalid input */
	if (n < 0)
		return (-1);
	/* Call the helper function to find the square root */
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively finds the natural square root of a number.
 * @n: The number to calculate the square root of.
 * @i: Iterator to check for the square root.
 *
 * Return: The resulting square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	/* Check if the square of the iterator exceeds n */
	if (i * i > n)
		return (-1);
	/* Check if the square of the iterator is equal to n */
	if (i * i == n)
		return (i);
	/* Recur with the incremented iterator to find */
	return (actual_sqrt_recursion(n, i + 1));
}
