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
	int i, k, len;
	char t;

	while (s[i] != '\0')
	{
		i++;
	}
;
	for (k = 0; k < len / 2; k++)
	{
		t = s[k];
		s[k] = s[len - k - 1];
		s[len - k - 1] = t;
	}

}
