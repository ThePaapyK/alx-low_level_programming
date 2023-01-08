#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of doubly linked list
 * @n: data of the node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	int i;

	tmp = (*head);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head)
	{
		for (i = 0; (*head != NULL) && ((*head)->next != NULL); i++)
		{
			*head = (*head)->next;
		}
		 (*head)->next = new;
		 new->prev = *head;
		 *head = tmp;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
