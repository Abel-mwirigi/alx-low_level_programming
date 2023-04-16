#include"main.h"

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:pointer to the memory previously allocated with a call to malloc
 * @old_size:size, in bytes, of the allocated space for ptr
 * @new_size:new size, in bytes of the new memory block
 * Return:pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ar = malloc(new_size);
		if (ar == NULL)
			return (NULL);
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ar = malloc(new_size);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		ar[i] = ((char *)ptr)[i];
	free(ptr);
	return (ar);
}
