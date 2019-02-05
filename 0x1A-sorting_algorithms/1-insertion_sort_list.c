#include "sort.h"
/**
 *  insertion_sort_list - sorts integers using insertion
 * @list: doubly linked list from array of integers
 * when doing insertion i like to think of the list as a hand of cards
 * Return: none
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp = NULL;
	listint_t *current = NULL;
	listint_t *hand = NULL;

	if (!*list)
		return;
	for (current = *list; current; current = current->next)/*go through cards*/
	{
		/*check value of prev cards*/
		for (temp = current->prev; temp; temp = temp->prev)
		{
			/**check value of temp card with card in deck*/
			if (current->n < temp->n)
			{
				if (current->next)
				/**swapping cards if value is less*/
					current->next->prev = temp;
				temp->next = current->next;
				hand = temp->prev;
				temp->prev = current;
				current->next = temp;
				current->prev = hand;
				if (hand)
					hand->next = current;
				else
					*list = current;
				temp = temp->prev;
			}
			else
				break;
			print_list(*list);
		}
	}
}
