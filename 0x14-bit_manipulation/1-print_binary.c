#include "main.h"

/**
 * _pow - Calculates the value of (base ^ power).
 * @base: Base of the exponent.
 * @power: Power of the exponent.
 *
 * Return: Value of (base ^ power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;

	/* Calculate the power of the base */
	for (a = 1; a <= power; a++)
		num *= base;

	return (num); /* Return the calculated value */
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: Number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

	/* Iterate through each bit to print the binary representation */
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1'); /* Print '1' if the bit is 1 */
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0'); /* Print '0' if the bit is 0 */
		}
		divisor >>= 1; /* Right-shift the divisor by 1 */
	}
}
