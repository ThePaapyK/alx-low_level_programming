#include "lists.h"

/**
* free_list -  frees a list_t list.
* @head: list to be freed
*/

void free_list(list_t *head)
{
	while (head->next)
	{
		free(head->str);
		free(head);

		head = head->next;
		head = head->next;
		
	}
	free(head->str);
	free(head);
}
