#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

/**
 * main - main program
 * @argc:counter
 * @argv:parameters
 * Return:Always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*f)(int, int) = get_op_func(op);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op[0] == '/' || op[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", f(a, b));
	return (0);
}
