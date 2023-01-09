#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of linked list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp, *aux;
	unsigned int i;

	node = *head;
	i = 0;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while (node && i != index)
	{
		i++;
		node = node->next;
	}
	if (node && i == index)
	{
		aux = node->next;
		tmp = node->prev;
		if (node->next)
			node->next->prev = tmp;
		node->prev->next = aux;
		free(node);
		return (1);
	}
	return (-1);
}

