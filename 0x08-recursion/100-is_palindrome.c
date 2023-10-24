#include "main.h"

/* Prototype for the helper functions */
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: String to reverse.
 *
 * Return: 1 if it is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	/* If the first character is null, it is a palindrome */
	if (*s == 0)
		return (1);
	/* Call the helper function to check for palindrome */
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to calculate the length of.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: If the current character is null, return 0 */
	if (*s == '\0')
		return (0);
	/* Recur with the incremented string to calculate the length */
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Recursively checks the characters for palindrome.
 * @s: String to check.
 * @i: Iterator.
 * @len: Length of the string.
 *
 * Return: 1 if it is a palindrome, 0 if it is not.
 */
int check_pal(char *s, int i, int len)
{
	/* Check if the characters at positions i and len-1 are not equal */
	if (*(s + i) != *(s + len - 1))
		return (0);
	/* Base case: If i is greater than or equal to len, it is a palindrome */
	if (i >= len)
		return (1);
	/* Recur with updated positions to check for palindrome */
	return (check_pal(s, i + 1, len - 1));
}
