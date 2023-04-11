#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str:string passed
 * Return:A pointer
 */

char *_strdup(char *str)
{
	char *ar;
	int i;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	{
	}
	ar = malloc((len + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
