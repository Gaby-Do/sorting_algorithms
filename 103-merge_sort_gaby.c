#include "sort.h"

/**
 * merge_sort -  sorts array of ints in ascending order w/ Merge sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	size_t low = 0, high = size - 1;
	int *aux;

	aux = malloc(sizeof(int) * size);
	if (!aux)
		return;
	split(array, aux, low, high, size);
	print_array(array, size);
	free(aux);
}


/**
 * split - recursively sorts an array
 * @array: array to be sorted
 * @aux: auxiliary array
 * @low: position 0 in array
 * @high: final position in array
 * @size: size of original array
 * Return: 0 if ok
 */
void split(int *array, int *aux, size_t low, size_t high, size_t size)
{
	size_t mid;

	if (low < high && high > 2)
	{
		mid = (low + high) / 2;
		split(array, aux, low, mid - 1, size);
		if (mid != high - 1)
			split(array, aux, mid, high, size);
		merge(array, aux, low, mid, high);
	}
	else
	{
		return;
	}
}

/**
 * merge - rebuilds the sorted array
 * @array: array to be sorted
 * @aux: auxiliary array
 * @low: position 0 in array
 * @mid: middle point
 * @high: final position in array
 */
void merge(int *array, int *aux, size_t low, size_t mid, size_t high)
{
	size_t l1, l2, i;

	for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++)
	{
		if (array[l1] <= array[l2])
		{
			aux[i] = array[l1];
			l1++;
		}
		else
		{
			aux[i] = array[l2];
			l2++;
		}
	}
	while (l1 <= mid)
	{
		aux[i] = array[l1];
		i++;
		l1++;
	}
	while (l2 <= high)
	{
		aux[i] = array[l2];
		i++;
		l2++;
	}
	for (i = low; i <= high; i++)
		array[i] = aux[i];
	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + low, mid - low);
	printf("[right]: ");
	print_array(array + mid, high - mid);
	printf("[Done]: ");
	print_array(array + low, high - low);
}
