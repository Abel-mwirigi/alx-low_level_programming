#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min:start of the array
 * @max:end of the array
 * Return:pointer
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ar = malloc(size * sizeof(int));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (ar[i] != max)
		{
			ar[i] = min++;;
		}
	}
	return (ar);
}
