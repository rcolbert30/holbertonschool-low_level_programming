#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *delete_node;
	int del;

	if (!head)
	{
		return (0);
	}
	if (head)
	{
		delete_node = *head;
		*head = delete_node->next;
		del = delete_node->n;
		free(delete_node);
	}
	return (del);
}
