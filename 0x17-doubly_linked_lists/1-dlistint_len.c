#include "lists.h"

/**
 * dlistint_len - returns number od elements in a doubly linked list
 * @h: head of the doubly linked list
 * Return: number of list elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
