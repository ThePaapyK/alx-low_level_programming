#include "lists.h"

/**
* add_node - adds a new node at the end of a list_t list.
* @head: list
* @str: node to be added
* Return: pointer to newly added node
*/

list_t *add_node(list_t **head, const char *str)
{
	char *noah;
	struct list_s *sire;
	struct list_s *YHWH;

	list_t *node = *head;
	while (node != NULL)
	{
		node = node->next;
	}
	sire = malloc(sizeof(*head));
	if (sire == NULL)
		return (NULL);

	YHWH = NULL;
	noah = strdup(str);

	node->next = sire;
	node->str = noah;
	node->next = YHWH;
	return (sire);
}
