#include "sort.h"

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
