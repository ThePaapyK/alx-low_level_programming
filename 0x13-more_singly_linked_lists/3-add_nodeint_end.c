#include "main.h"

/**
* add_nodeint_end - adds a new node at the end
* of a listint_t list.
* @head: pointer to list
* @n: element to be added
* Return:  the address of the new element,
* or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *c_node = *head;
	listint_t *sire;
	int i = 0;

	sire = malloc(sizeof(listint_t));

	if (!sire)
	{
		free(sire);
		return (NULL);
	}

	while (c_node->next)
	{
		c_node = c_node->next;
	}

	sire->next = NULL;

	if (c_node)
	{
		c_node->next = sire;
	}
	else
		*head = sire;

	return (sire);
}
