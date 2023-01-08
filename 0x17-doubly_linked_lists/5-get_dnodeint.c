#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of the linked list
 * @index: index of the nth node
 * Return: The nth node or null if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *h = head;
	i = 0;
	while (h && i != index)
	{
		i++;
		h = h->next;
	}
	if (h && i == index)
		return (h);
	return (NULL);
}
