#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the doubly linked list
 * Return: number of list elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
