#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n:the number given
 * @index:index of the value
 * Return:integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	j = 1UL << index;
	bit_value = (n & j) >> index;

	return (bit_value);
}
