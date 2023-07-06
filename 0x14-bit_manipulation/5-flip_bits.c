#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n:argument
 * @m:argument
 * Return:integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int i = 0;

	result = n ^ m;

	while (result != 0)
	{
		result &= (result - 1);
		i++;
	}
	return (i);
}
