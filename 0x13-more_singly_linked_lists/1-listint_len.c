#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Linked list of type listint_t to traverse
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++; /* Incrementing the count of nodes */
		h = h->next; /* Moving to the next node */
	}

	return (num_nodes); /* Returning the total count of nodes */
}
