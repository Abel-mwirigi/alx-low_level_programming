#include "main.h"

/**
 * _strcpy - copies the string to by src
 *
 * @dest: where the string will be copied to
 * @src: where the string will be copied from
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
