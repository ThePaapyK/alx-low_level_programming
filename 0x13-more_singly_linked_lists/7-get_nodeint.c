#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node
* of a listint_t linked list
* @head: head node of list
* @index: index of selected node
* Return: the nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return(head);
}
