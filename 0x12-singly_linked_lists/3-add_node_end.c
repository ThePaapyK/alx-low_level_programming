#include "lists.h"

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: list
* @str: node to be added
* Return: pointer to newly added node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *sire;
	list_t *c_node;
	int i;

	c_node = *head;

	while (c_node && c_node != NULL)
	{
		c_node = c_node->next;
	}

	for (i = 0; str[i] != '\0'; i++)
		;

	sire = malloc(sizeof(list_t));
	if (sire == NULL)
	{
		free(sire);
		return (NULL);
	}

	sire->str = strdup(str);
	if (sire->str == NULL)
	{
		free(sire);
		return (NULL);
	}
	sire->len = i;
	sire->next = NULL;

	if (c_node)
	{
		while (c_node->next)
			c_node = c_node->next;
		c_node->next = sire;
	}
	else
		*head = sire;

	return (sire);
}
