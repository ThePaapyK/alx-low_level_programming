#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a
* given position.
* @head: head node of list
* @idx: index of list where node should be added
* @n: void
* Return: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at
* index idx, do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *sire;

	listint_t *c_node = *head;

	unsigned int i = 0;

	if (idx != 0)
	{
		while (c_node && i < idx - 1)
		{

			i++;
			c_node = c_node->next;
		}
	}


	sire = malloc(sizeof(listint_t));
	if (!sire)
	{
		free(sire);
		return (NULL);
	}
	sire->n = n;
	if (idx == 0)
	{
		sire->next = *head;
		*head = sire;

	}
	else
	{
		sire->next = c_node->next;
		c_node->next = sire;
	}

	return (sire);
}
