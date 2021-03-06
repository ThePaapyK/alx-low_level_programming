#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: list to be printed
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}

		h = h->next;
	}
	return (i);
}
