#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;

	ptr = *head;

	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}

