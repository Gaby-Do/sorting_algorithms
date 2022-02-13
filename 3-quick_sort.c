#include "sort.h"

/**
 * quick_sort - sorts array of ints in ascending order w/quick sort algorithm
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t high = size - 1;

	if (array && size > 1)
	{
		sort_q(array, 0, high, size);
	}
}

/**
 * swap - swaps two elements in an array
 * @a: int to swap with b
 * @b: int to swap with a
 */
void swap(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}

/**
 * partition - divides the array in 2
 * @array: array to be divided
 * @low: position 0
 * @high: end of array
 * @size: size of array
 * Return: pivot
 */
int partition(int *array, size_t low, size_t high, size_t size)
{
	int pivot = array[high];
	size_t i = low - 1;
	size_t j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap(&array[high], &array[i + 1]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * sort_q - quick_sort
 * @array: to be sorted
 * @low: first place of array
 * @high: end place of array
 * @size: size of array
 * Return: 0 if ok
 */
int sort_q(int *array, size_t low, size_t high, size_t size)
{
	size_t p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		if (p != low)
			sort_q(array, low, p - 1, size);
		if (p != high)
			sort_q(array, p + 1, high, size);
	}
	return (0);
}
