#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * _sqrt - finds the squareroot of a number
 * @n:number passed
 * @start:the first index
 * @end:the last index
 * Return:sqrt
 */

int _sqrt(int n, int start, int end)
{
	int mid;
	int sqr;
	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	sqr = mid * mid;

	if (sqr == n)
	{
		return (mid);
	}
	else if (sqr > n)
	{
		return (_sqrt(n, start, mid - 1));
	}
	else
	{
		return (_sqrt(n, mid + 1, end));
	}
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
	return (_sqrt(n, 0, n));
}
