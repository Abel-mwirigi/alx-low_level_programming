#include"main.h"

/**
 * _srt - finds the squareroot of a number
 * @n:number passed
 * @j:tester
 * Return:srt
 */

int _srt(int n, int j)
{
	if (j * j == n)
		return (n);
	if (j * j > n)
		return (-1);
	return (_srt(n, j + 1));
}

/**
 * _sqrt_recursion - returns the squareroot
 * @n:number passed
 * Return:squareroot
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_srt(n, 1));
}
