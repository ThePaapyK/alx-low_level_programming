#include "lists.h"

/**
* delete_nodeint_at_index -  deletes the node at
* index index of a listint_t linked list.
* @head: head node of list
* @index: the node that should be deleted. Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *sire;

	listint_t *c_node = *head;

	unsigned int i = 0;

	if (index != 0)
	{

		while (i < index - 1 && c_node != NULL)
		{
			i++;
			c_node = c_node->next;
		}
	}

	if (c_node == NULL || (c_node->next == NULL && index != 0))
		return (-1);

	sire = c_node->next;
	if (index == 0)
	{
		free(c_node);
		*head = sire;
	}
	else
	{
		c_node->next = sire->next;
		free(sire);
	}


	return (1);
}
