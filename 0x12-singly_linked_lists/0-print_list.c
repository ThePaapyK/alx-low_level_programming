#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: list to be printed
* Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *node = h;

	for (i = 0; node != NULL; i++)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");

		printf("[%d] %s\n", node->len, node->str);
		node = node->next;
	}
	return (i);
}
