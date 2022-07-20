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

	while (c_node->next)
	{
		if (i == index - 1)
			break;
		i++;
		c_node = c_node->next;
	}
	
	if (c_node == head)
	{
		*head = c_node->next;
	}
	else
	{
		sire->next = c_node->next;
	} 
		sire = current_node;
		c_node = c_node->next;
		return(*head);
}
