#include"main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest:first string
 * @src:second string
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
int i, k;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
