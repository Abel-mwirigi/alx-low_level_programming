#include"main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b:memory space
 * Return:pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit(98);
	return (ar);
}
