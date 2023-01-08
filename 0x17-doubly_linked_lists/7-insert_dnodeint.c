#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of linked list
 * @idx: index where node should be inserted
 * n: data in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	node = *h;
	if (node == NULL || !node)
		return (NULL);
	i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (node && i != idx)
	{
		i++;
		node = node->next;
	}
	if (i == idx)
	{
		new->n = n;
		tmp = node->prev;
		tmp->next = new;
		new->next = node;
		new->prev = tmp;
		node->prev = new;
	}
	else
	{
		return (NULL);
	}
	return (new);
}
