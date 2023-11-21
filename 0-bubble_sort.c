#include "sort.h"

/**
 * bubble_sort - A function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: The array to sort
 * @size: THe size of the aaray
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int taux = 0;

	if (array == NULL || size == 0)
		return;
	for (; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				taux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = taux;
				print_array(array, size);
			}
		}
	}
}
