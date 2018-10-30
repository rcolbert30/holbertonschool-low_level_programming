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
	while (head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	*head = NULL;
}

