#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 *
 * @str: string to be output
 *
 * Return: void
*/

void puts_half(char *str)
{
	int i, k, length;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	if (length % 2 == 0)
	{
		for (k = length / 2; k < length; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		for (k = ((length + 1) / 2); k < length; k++)
		{
			_putchar(str[k]);
		}

	}


}
