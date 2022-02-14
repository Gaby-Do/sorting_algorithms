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

	m_sort(array, low, high, size);
}

/**
 * split - split an array by the middle
 * @low: first position in array
 * @high: last position in array
 * Return: middle point in the array
 */
int split(size_t low, size_t high)
{
	size_t m;

	m = (high - low) / 2;
	return (m);
}

/**
 * m_sort - recursively sorts an array
 * @array: array to be sorted
 * @low: position 0 in array
 * @high: final position in array
 * @size: size of original array
 * Return: 0 if ok
 */
int m_sort(int *array, size_t low, size_t high, size_t size)
{
	size_t mid;

	if (low < high)
	{
		mid = (high - low) / 2;
		if (mid - 1 != low)
			m_sort(array, low, mid - 1, size);
		if (mid != high)
			m_sort(array, mid, high, size);
	}
	return (0);
}


