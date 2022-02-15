#include "sort.h"

/**
 * merging - merge the values in the position of array and copy
 * @dest: copy of array, and second array
 * @origen: source of data
 * @low: lower bound of array
 * @m: middle position the final + 1 of the first array and the
 * first one of the second array
 * @high: upper bound of array
 */

void merging(size_t low, size_t m, size_t high, int *dest, int *origen)
{
<<<<<<< HEAD
	size_t i = low, j = m, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(origen + low, m - low);
	printf("[right]: ");
	print_array(origen + m, high - m);

	for (k = low; k < high; k++)
	{
		if (i < m && (j >= high || origen[i] <= origen[j]))
			dest[k] = origen[i], i++;
		else
			dest[k] = origen[j], j++;
	}
}


/**
* splitANDmerge - Split the given array
* and merge the sorted sub-arrays.
* @array: Array of integers to be sorted.
* @copia: A copy of the array.
* @low: lower bound of array
* @high: upper bound of array
*/
void splitANDmerge(size_t low, size_t high, int *array, int *copia)
{
	size_t m;

	if (high - low < 2)
		return;

	/*split*/
	if (high % 2 == 0)
		m = (low + high) / 2;
	/*recursion*/
	splitANDmerge(low, m - 1, array, copia);
	splitANDmerge(m + 1, high, array, copia);
	merging(low, m, high, array, copia);
}

/**
 * merge_sort -  sorts array of ints in ascending order w/ Merge sort algorithm
=======
	size_t low = 0, high = size - 1;
	int *aux;

	aux = malloc(sizeof(int) * size);
	if (!aux)
		return;
	split(array, low, high, size);
}


/**
 * split - recursively sorts an array
>>>>>>> 4e13e6edd29f3be339fdab412dff664223f9ce8a
 * @array: array to be sorted
 * @size: size of array
 */
<<<<<<< HEAD
void merge_sort(int *array, size_t size)
=======
int split(int *array, size_t low, size_t high, size_t size)
>>>>>>> 4e13e6edd29f3be339fdab412dff664223f9ce8a
{
	size_t i;
	int *copia = NULL;

<<<<<<< HEAD
	if (!array || size < 2)
		return;

	copia = malloc(sizeof(int) * size);

	if (!copia)
		return;
=======
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
>>>>>>> 4e13e6edd29f3be339fdab412dff664223f9ce8a

	/*copia array*/
	for (i = 0; i < size; i++)
		copia[i] = array[i];

	splitANDmerge(0, size, array, copia);
	free(copia);
}
