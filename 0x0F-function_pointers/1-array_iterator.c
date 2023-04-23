#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array:pointer
 * @size:size of array
 * @action:pointer to function
 * Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;
	for(; i < size; i++)
	{
		action(array[i]);
	}
}
