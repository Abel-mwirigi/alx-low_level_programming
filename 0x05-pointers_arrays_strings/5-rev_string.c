#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: void
*/

void rev_string(char *s)
{
	char c = s[0];
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		len--;
		c = s[i];
		s[i] = s[len];
		s[len] = c;
	}
}
