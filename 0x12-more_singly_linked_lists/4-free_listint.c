#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: pointer
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = ptr->next;
		free(ptr);
	}
}

