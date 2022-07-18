#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list.
* @h: head of list
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t i;
	
	for (i = 0; h->next; i++)
	{
		printf("%d\n", h.n);
	}
	return (i);
}
