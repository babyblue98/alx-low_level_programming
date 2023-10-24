#include "lists.h"
#include <stdio.h>

/* Counts the number of unique nodes in a looped listint_t linked list. */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1; /* Initialize the count of nodes */

	/* Check if the list is not looped */
	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	/* Traverse the list with the tortoise and hare pointers */
	while (hare)
	{
		/* Check for loop detection */
		if (tortoise == hare)
		{
			tortoise = head;
			/* Count the nodes in the loop */
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			/* Count the nodes after the loop ends */
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/* Prints a listint_t list safely. */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head); /* Count the nodes in the list */

	/* If the list is not looped, print all nodes */
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	/* If the list is looped, print nodes before and after the loop */
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes); /* Return the total number of nodes */
}
