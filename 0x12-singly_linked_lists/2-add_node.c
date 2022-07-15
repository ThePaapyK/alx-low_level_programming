#include "lists.h"

/**
* add_node - adds a new node at the end of a list_t list.
* @head: list
* @str: node to be added
* Return: pointer to newly added node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	while (node != NULL)
	{
		node = node->next;
	}
	char *noah;
	noah = strdup(str);

	if (noah == NULL)
		return (NULL);
	node->next;
	node->str = noah;
	node->next = NULL;
	return (node);
}
