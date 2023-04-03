#include "main.h"

/**
 * *_strpbrk -  searches a string for
 * any of a set of bytes
 * @s:initial string
 * @accept:checker
 * Return:char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				_putchar(j);
			}
		}
	}
	return (s);
}
