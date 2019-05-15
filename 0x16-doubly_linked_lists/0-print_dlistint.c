#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all element of a doubly linked list
 * @h: pointer
 * Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	for (count = 0; h != null; count++)
	{
		printf("%d\n", h->next);
		h = h->next;
	}
	return (count);
}

