#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: head of a doubly linked list
 * Return: 0
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
