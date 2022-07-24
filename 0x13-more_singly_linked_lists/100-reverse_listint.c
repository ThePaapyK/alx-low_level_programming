#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list.
* @head: head node of linked list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
        listint_t *c_node;
        listint_t *h;

        c_node = NULL;
        h = NULL;

        while (*head != NULL)
        {
                h = (*head)->next;
                (*head)->next = c_node;
                c_node = *head;
                *head = h;
        }

        *head = c_node;
        return (*head);
}
