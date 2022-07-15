#include "lists.h"

/**
* add_node - adds a new node at the end of a list_t list.
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

	while (c_node != NULL)
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
<<<<<<< HEAD
	c_node->next = sire;
=======

	if (c_node)
		c_node->next = sire;
	else
		*head = sire;
>>>>>>> 425b01d36ec607269f9b1a9baeff6532ea15a780
	return (sire);
}
