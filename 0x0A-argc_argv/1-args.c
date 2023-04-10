#include<stdlib.h>
#include<stdio.h>

/**
 * main - main function
 * @argc:number of parameters
 * @argv:array of pointers
 * Return:Always 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, num;

	for (i = 0; i < argc; i++)
		num = i;
	printf("%d\n", num);
	exit(EXIT_SUCCESS);
}
