#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning
* of a listint_t list.
* @head: head of list
* @n: element to be added
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *c_node = *head;
	listint_t *sire;

	sire = malloc(sizeof(listint_t));

	if (!sire)
	{
		free(sire);
		return (NULL);
	}

	sire.n = n;

	sire->next = c_node;
	c_node = sire;

	return (c_node);
}
