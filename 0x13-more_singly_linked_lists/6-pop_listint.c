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

	if (head)
	{
		*head = vector->next;
		vector = *head;
		return (vector->n);
	}
	return (0);
}
