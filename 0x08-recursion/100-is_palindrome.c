#include<string.h>
#include "main.h"

/**
 * is_palindrome - function that returns 1 if a
 * string is a palindrome and 0 if not
 * @s:string passed
 * Return:1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int start = 0;
	int length;

	length = strlen(s) - 1;
	if (s[start] == s[length])
	{
		return (1);
	}
	while (s[start] < s[length])
	{
		/*string not a palindrome*/
		if (s[start] != s[length])
		{
			return (0);
		}
		start++;
		length--;
	}
	return (1);
}
