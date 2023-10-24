#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list in an informal way
 * @h: The linked list of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n); /* Printing the value of the current node */
		num_nodes++; /* Incrementing the count of nodes */
		h = h->next; /* Moving to the next node */
	}

	return (num_nodes); /* Returning the total count of nodes */
}
