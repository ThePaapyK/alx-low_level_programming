#include "lists.h"

/**
* add_node - adds a new node at the end of a list_t list.
* @head: list
* @str: node to be added
* Return: pointer to newly added node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *sire;
	int i;
	list_t *node = *head;

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
	sire->next = node;
	node = sire;
	return (node);
}
