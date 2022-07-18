#include "lists.h"

/**
* free_listint - frees a listint_t list.
* @head: head of list
* Return: nothing
*/


void free_listint(listint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
