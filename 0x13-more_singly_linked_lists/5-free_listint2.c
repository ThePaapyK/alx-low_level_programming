#include "lists.h"

/**
* free_listint2 -  frees a listint_t list. 
* sets the head to NULL
* @head: pointer to list
* Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *c_node = *head;

	if (head)
	{
		if (c_node)
		{
			while (c_node->next)
			{
				free(c_node);
				c_node = c_node->next;
			}
			free(c_node);
		}
		free(head);
	}
}
