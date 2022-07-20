#include "lists.h"

/**
* free_listint2 -  frees a listint_t list.
* sets the head to NULL
* @head: pointer to list
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *vector;
	listint_t *rhodes;

	if (head != NULL)
	{
		rhodes = *head;
		while ((vector = rhodes) != NULL)
		{
			rhodes = rhodes->next;
			free(vector);
		}
		*head = NULL;
	}
}
