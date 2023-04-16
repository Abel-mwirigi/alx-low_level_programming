#include"main.h"

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
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	ar = malloc((n + i + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ar[k] = s1[k];
	for (l = 0; l < n; l++)
		ar[k + l] = s2[l];
	return (ar);
}
