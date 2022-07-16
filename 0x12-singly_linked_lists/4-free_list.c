#include "lists.h"

/**
* free_list -  frees a list_t list.
* @head: list to be freed
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head != NULL)
		{
			if (head->str != NULL)
				free(head->str);
			free(head);
		}
			head = head->next;
	}
	free(head->str);
	free(head);
}
