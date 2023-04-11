#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1:first string
 * @s2:second string
 * Return:joint string
 */

char *str_concat(char *s1, char *s2)
{
	char *ar;
	int i;
	int j;
	int len1;
	int len2;

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	ar = malloc((len1 + len2 + 2) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ar[i + 1] = s2[j];
	}
	return (ar);
}
