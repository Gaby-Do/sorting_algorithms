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
	split(array, low, high, size);
}


/**
 * split - recursively sorts an array
 * @array: array to be sorted
 * @low: position 0 in array
 * @high: final position in array
 * @size: size of original array
 * Return: 0 if ok
 */
int split(int *array, size_t low, size_t high, size_t size)
{
	size_t mid;

	if (low < high)
	{
		mid = (low + high) / 2;
		if (mid - 1 != low)
			split(array, low, mid - 1, size);
		if (mid != high)
			split(array, mid, high, size);
		merge(low, mid, high);
	}
	return (*array);
}

/**
 * merge - rebuilds the sorted array
 * @low: position 0 in array
 * @mid: middle point
 * @high: final position in array
 */
void merge(size_t low, size_t mid, size_t high)
{
}

