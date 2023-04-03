#include"main.h"

/**
 * _strspn -  gets the length of a
 * prefix substring
 * @s:initial string
 * @accept:prefix string
 * Return:Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = i; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
			{
				return (len);
		}
	}
}
