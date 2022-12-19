#include "sort.h"
/**
 *quick_sort - function too sort an array in ascending order
 *@array: pointer to array
 *@size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	if (array == NULL)
		return;

	quicksort_recursion(array, 0, size - 1, size);
}
/**
 *quicksort_recursion-function to make recursive calls to loop over the array
 *@array: pointer to array
 *@low: lowest index
 *@high: highest index
 *@size: array size
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index = partition(array, low, high, size);

		quicksort_recursion(array, low, pivot_index - 1, size);
		quicksort_recursion(array, pivot_index + 1, high, size);
	}
}
/**
 * swap - unction to swap values
 * @x: first value
 * @y: second value
 */
void swap(int *x, int *y)
{
        int temp;

        temp = *x;
        *x = *y;
        *y = temp;
}
/**
 *partition - function to separate array into sub arrays
 *@array: pointer to array
 *@low: lowest index
 *@high: highest index
 *@size: array size
 *Return: index
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j;
	int i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (array[high] != pivot)
		print_array(array, size);
	return (i + 1);
}
