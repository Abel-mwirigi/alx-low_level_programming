#include"main.h"
#include"_putchar.c"

/**
 * reverse_array - reverses elements
 * @a:string
 * @n:elements of the array
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int len = 0;
	int i;

	for (n = 0; a[n] != '\0'; n++)
	{
		len = n++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(a[i] + '0');
	}
}
