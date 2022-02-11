#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending
 * order using the Insertion sort algorithm
 * @list: doubly linked list of integers to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *travel;

	travel = *list;
	while (travel->next)
	{
		if (travel->n > travel->next->n)
		{
			if (travel->prev)
				travel->prev->next = travel->next;
			if (travel->next)
				travel->next->prev = travel->prev;
			travel->prev = travel->next;
			travel->next = travel->next->next;
			travel->next->prev = travel;
			travel->next->next = travel;
			print_list(*list);
		}
	}
}
