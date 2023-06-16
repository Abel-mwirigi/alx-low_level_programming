#include"main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n:memory space
 * Return:pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	ar = malloc((n + len1 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		ar[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ar[i + j] = s2[j];
	}
	ar[i + j] = '\0';
	return (ar);
}
