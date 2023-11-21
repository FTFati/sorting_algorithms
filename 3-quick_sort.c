#include "sort.h"

/**
 * swap - function thzt swaps 2 values
 * @array: array to sort
 * @size: the size of array
 * @a: first value
 * @b: second value
 * Return: Void
 */
void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}
/**
 * Lomuto_partition - function that partitionign the array
 * @array: array to partitiet
 * @size: array's size
 * @Lo: the low index of array
 * @Hi: the high index of array
 * Return: the new pivot
*/
size_t Lomuto_partition(int *array, size_t size, ssize_t Lo, ssize_t Hi)
{
	int i, j;
	int pivot = array[Hi];

	for (i = j = Lo; j < Hi; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[i++]);
	swap(array, size, &array[i], &array[Hi]);
	return (i);
}

/**
 * my_quicksort - function that sorts an array via  Lomuto partitioning scheme
 * @array: array to sort
 * @size: the size of array
 * @Lo: the low index of array
 * @Hi: the high index of array
 * Return: void
 */
void my_quicksort(int *array, size_t size, ssize_t Lo, ssize_t Hi)
{
	if (Lo < Hi)
	{
		ssize_t tmp = Lomuto_partition(array, size, Lo, Hi);

		my_quicksort(array, size, Lo, tmp - 1);
		my_quicksort(array, size, tmp + 1, Hi);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 * in ascending order using the Quick sort algorithm
 * @array: array to sort
 * @size: the size of array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	my_quicksort(array, size, 0, size - 1);
}
