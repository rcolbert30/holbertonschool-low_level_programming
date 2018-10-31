#include "lists.h"

/**
 * sum_listint - sums nodes in a list
 * @head: pointer
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int gsw = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		gsw += head->n;
		head = head->next;
	}
	return (gsw);
}
