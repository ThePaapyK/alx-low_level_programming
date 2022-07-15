#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: list to be printed
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;
	
	for (i = 0; h->next != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] NULL");
		printf("%s", h->str);
		h = h->next;
	}
	return (i);
