#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: head node of linked list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *c_node;
	listint_t *h;

	if (*head == NULL)
		return (NULL);

	c_node = *head;
	*head = c_node->next;
	h = (*head)->next;
	c_node->next = NULL;
	if (*head == NULL)
	{
		*head = c_node;
		return (c_node);
	}

	while (h != NULL)
	{
		(*head)->next = c_node;
		c_node = *head;
		*head = h;
		h = (*head)->next;
	}

	(*head)->next = c_node;
	return (*head);
}
