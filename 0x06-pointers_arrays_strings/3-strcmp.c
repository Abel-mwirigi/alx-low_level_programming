#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if s1 and s2 are equal, -ve if s1 less than s2, +ve if otherwise
*/

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int len = 0;
	int leng = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len = i++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		leng = j++;
	}
	if (len == leng)
	{
		return (len - leng);
	}
	else
	{
	return (0);
	}
}
