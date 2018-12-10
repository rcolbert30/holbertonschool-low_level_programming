#include "lists.h"

/**
 * sum_dlistint - sum of all data in linked list
 * @head: head of list
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int k;

	for (k = 0; head != NULL; head = head->next)
		k = k + head->n;

	return (k);
}
