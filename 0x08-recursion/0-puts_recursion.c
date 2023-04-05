#include"main.h"

/**
 * _puts_recursion - Write a function that prints
 *  a string, followed by a new line.
 *  @s:string to be written
 *  Return:void
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	if (s[i] != '\0')
	_putchar(s[i]);
	i++;
}
