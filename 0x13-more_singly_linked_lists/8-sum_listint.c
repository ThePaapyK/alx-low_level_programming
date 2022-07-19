#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n)
* of a listint_t linked list.
* @head: head node of list
* Return: the sum of all the data (n)
* of a listint_t linked list.
* if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
