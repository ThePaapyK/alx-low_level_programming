#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t
* linked list, and returns the head node’s data (n)
* @head: head of linked list
* Return: if the linked list is empty return 0
* else, return the head node's data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *vector = *head;
	int a;

	if (head == NULL)
	{
		if (*head == NULL)
			return(0);
		return (0);
	}
	a = (*head)->n;
	*head = vector->next;
	vector = vector->next;
	return (a);
}
