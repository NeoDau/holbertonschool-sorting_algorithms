#include "sort.h"
/**
 *selection_sort - sort array with  Selection sort algorithm
 *@array: pointer to the array
 *@size: the size of the array
 *return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	int aux, index;
	size_t i, a;

	if (array == NULL || size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		aux = array[i];
		index = a = i + 1;
		for (a = 0; a < size; a++)
		{
			if (aux > array[a])
			{
				aux = array[a];
				index = a;
			}
		}
		if (aux != array[i])
		{
			array[index] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
