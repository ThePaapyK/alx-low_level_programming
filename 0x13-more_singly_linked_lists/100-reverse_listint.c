#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: head node of linked list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_int *sire = *head;
	listint_t *c_node = *head;
	
	whille (c_node->next)
	{
		c_node->next = c_node;
		c_node = temp->next;
	}
	return (c_node);
}
