#include "sort.h"

/**
 * swap - Swap values of start and next index.
 * @array: the array with start and next values.
 * @start: start point of the array.
 * @next: next point of the array.
 * Return: nothing.
 */
void swap(int *array, size_t start, size_t next)
{
	size_t temp = array[next];

	array[next] = array[start];
	array[start] = temp;
}
