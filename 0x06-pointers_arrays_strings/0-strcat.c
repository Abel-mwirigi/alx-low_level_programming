#include"main.h"

/**
 * *_strcat - a function that concatenates two strings.
 * @dest:first string
 * @src:second string
 * Return:char
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int l;
	char *k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	k = malloc((i + j) * sizeof(char));
		for (l = 0; l <= i + j; l++)
		{
			k[l] = dest[l];
		}
		for (i = 0; i <= j; i++)
		{
			k[l] = src[i];
		}
	return (k);
}
