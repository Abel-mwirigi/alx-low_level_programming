#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n:number to be converted
 * Return:nothing
 */

void print_binary(unsigned long int n)
{
	int i = 1;
	unsigned long int j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	j = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (j != 0)
	{
		if ((n & j) != 0)
		{
			i = 0;
			_putchar(1 + '0');
		}
		else if (!i)
		{
			_putchar('0');
		}
		j >>= 1;
	}
}
