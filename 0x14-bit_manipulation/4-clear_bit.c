#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n:pointer to the  value passed
 * @index:index
 * Return:1 if it works or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	j = ~(1UL << index);
	*n &= j;

	return (1);
}
