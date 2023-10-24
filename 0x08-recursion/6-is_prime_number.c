#include "main.h"

/* Prototype for the helper function */
int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number or not.
 * @n: The number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	/* If n is less than or equal to 1, it is not prime */
	if (n <= 1)
		return (0);
	/* Call the helper function to determine if n is prime */
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively calculates if a number is prime.
 * @n: The number to evaluate.
 * @i: The iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	/* Base case: If the iterator reaches 1, the number is prime */
	if (i == 1)
		return (1);
	/* Check if n is divisible by the iterator and if the iterator is greater than 0 */
	if (n % i == 0 && i > 0)
		return (0);
	/* Recur with the decremented iterator to check for primality */
	return (actual_prime(n, i - 1));
}
