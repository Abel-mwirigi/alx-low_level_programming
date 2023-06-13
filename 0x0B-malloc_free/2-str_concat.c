#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	ar = malloc((len1 + len2 + 1) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ar[i + j] = s2[j];
	}
	ar[i + j] = '\0';
	return (ar);
}
