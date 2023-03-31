#include"main.h"

/**
 * rot13 -  a function that encodes
 * a string using rot13.
 * @s: arguments
 * Return:char
 */

char *rot13(char *s)
{
	unsigned int len;
	int b;

	len = 0;

	while (*s != '\0')
	{
		b = *s;
		if (b >= 78)
			*s = (char)(b - 13);
		else
			*s = (char)(b + 13);
		s++;
		len++;
	}
	return (s - len);
}
