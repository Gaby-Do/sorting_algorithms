#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list in ascending
 * order using the Insertion sort algorithm
 * @list: doubly linked list of integers to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *travel;
	listint_t *aux;

	travel = (*list)->next;
	aux = travel;
	while (aux)
	{
		while (travel->prev)
		{
			if (travel->n < travel->prev->n)
			{
				travel->prev->next = travel->next;
				if (travel->next)
					travel->next->prev = travel->prev;
				travel->next = travel->prev;
				travel->prev = travel->prev->prev;
				if (travel->prev)
					travel->prev->next = travel;
				travel->next->prev = travel;
				if (!travel->prev)
					*list = travel;
				print_list(*list);
				aux = travel->next;
			}
			else
			{
				travel = travel->next;
			}
		}
		travel = aux->next;
	}
}
