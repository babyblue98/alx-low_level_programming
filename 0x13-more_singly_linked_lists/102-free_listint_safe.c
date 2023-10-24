#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: The number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0; /* Initialize the length counter */
	int diff;
	listint_t *temp;

	/* Check if the list or head is empty */
	if (!h || !*h)
		return (0);

	/* Traverse the list and free each node */
	while (*h)
	{
		diff = *h - (*h)->next;

		/* Check for normal or looped nodes */
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			/* Free the last node and terminate the loop */
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL; /* Set the head pointer to NULL after freeing all nodes */

	return (len); /* Return the total number of elements freed */
}
