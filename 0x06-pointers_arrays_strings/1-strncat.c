#include "main.h"

/**
 * *_strncat - concancates two strings
 *
 * @src: string to be concatenated from
 * @dest: string to concatenate to
 * @n: no of bytes to be used from src
 *
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[i + k] = src[k];
	dest[i + k] = '\0';
	return (dest);
}
