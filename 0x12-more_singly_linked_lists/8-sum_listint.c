#include "lists.h"

/**
 * sum_listint - sums nodes in a list
 * @head: pointer
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	
	if (!head)
		return (0);
	return (head->n + sum_listint(head->next));
}
