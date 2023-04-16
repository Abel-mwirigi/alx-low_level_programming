#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/**
 * checker - checks for parameters if digits
 * @ar:array to test
 * Return:Always 0
 */

int checker(char *ar)
{
	unsigned int i;

	for (i = 0; i < strlen(ar); i++)
	{
		if (!isdigit(ar[i]))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - the main program
 * @argc:argument count
 * @argv:parameters
 * Return:Always 0
 */

int main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!checker(argv[1]) || !checker(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
