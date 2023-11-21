#include "sort.h"

/**
 * selection_sort - A function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: An array to sort
 * @size: The size of the array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	int count = 0;
	size_t i = 0, j = 0, index = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		if (index != i)
		{
			count = array[i];
			array[i] = array[index];
			array[index] = count;
			print_array(array, size);
		}
	}
}
