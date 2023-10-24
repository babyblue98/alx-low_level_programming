#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Linked list to search for.
 *
 * Return: Address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	/* Check if the list is empty */
	if (!head)
		return (NULL);

	/* Traverse the list with slow and fast pointers */
	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		/* Check for loop detection */
		if (fast == slow)
		{
			slow = head;
			/* Find the node where the loop starts */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL); /* Return NULL if there is no loop */
}
