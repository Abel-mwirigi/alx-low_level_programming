#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: pointer to character
 *
 * Return: character
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
