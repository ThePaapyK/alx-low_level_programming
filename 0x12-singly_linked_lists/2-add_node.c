#include "main.h"

/**
* add_node - adds a new node at the end of a list_t list.
* @head: list
* @str: node to be added
* Return: pointer to newly added node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	while (head != NULL)
	{
		head = head->next;
	}
	char *noah;
	noah = strdup(str);

	if (noah == NULL)
		return (NULL);
	head->next;
	head->str = noah;
	head->next = NULL;
	return (noah);
}
