#include"main.h"
#include<stdio.h>

/**
 * _strlen_recursion - Write a function that
 * returns the length of a string
 * @s:string
 * Return:Always 0
 */

int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s != '\0')
		return (len + _strlen_recursion(s + 1));
	return (0);
}
