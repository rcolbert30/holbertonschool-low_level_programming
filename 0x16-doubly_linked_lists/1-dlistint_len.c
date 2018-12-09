#include "lists.h"

/**
 * dlistint_len - returns number of elements in a doubly linked list
 * @h: list
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter;

	for (counter = 0; h != NULL; counter++)
		h = h->next;

	return (counter);
}
