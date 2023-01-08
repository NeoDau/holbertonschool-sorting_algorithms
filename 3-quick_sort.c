#include "sort.h"

/**
 * qs - qs
 * @array: array
 */

void qs(int *array, int limite_left, int limite_right)
{
	int left, right, temporal, pivot;

	left = limite_left;
	right = limite_right;
	pivot = array[right];

	while (left <= right)
	{
		while (array[left] < pivot && left < limite_right)
			left++;
		while (pivot < array[right] && right > limite_left)
			right--;

		if (left <= right)
		{
			temporal = array[left];
			array[left] = array[right];
			array[right] = temporal;
			left++;
			right--;
		}
	}

	if (limite_left < right)
		qs(array, limite_left, right);

	if (limite_right > left)
		qs(array, left, limite_right);
}

/**
 * quick_sort - Quick Sort
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1);
}

