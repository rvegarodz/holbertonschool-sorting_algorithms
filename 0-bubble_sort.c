#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t step, i;
	int swap, temp;
	
	for (step = 0; step < size - 1; ++step)
	{
		swap = 0;
		
		for (i = 0; i < size - step - 1; ++i) 
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}
