#include "main.h"

/**
 * wildcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: 0.
 */

int wildcmp(char *s1, char *s2)
{
	/* Check if the first string is null */
	if (*s1 == '\0')
	{
		/* Check if the second string is not null and is an asterisk */
		if (*s2 != '\0' && *s2 == '*')
		{
			/* Recur with the updated second string */
			return (wildcmp(s1, s2 + 1));
		}
		/* Return 1 if both strings are null */
		return (*s2 == '\0');
	}

	/* If the current character in the second string is an asterisk */
	if (*s2 == '*')
	{
		/* Recur by either ignoring the asterisk in the second string or ignoring a character in the first string */
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	/* If the characters are equal, recur with the next characters in both strings */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	/* If none of the conditions are met, return 0 */
	return (0);
}
