#include "lists.h"

/**
* free_list -  frees a list_t list.
* @head: list to be freed
*/

void free_list(list_t *head)
{
	while (head)
	{
		if (head->str)
			free(head->str);
		free(head);

		head = head->next;
	}
}
