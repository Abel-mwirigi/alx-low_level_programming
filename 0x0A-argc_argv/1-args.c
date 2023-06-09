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
	int i;
	int m;

	for (i = 0; i < argc; i++)
	{
		m = i;
	}
	printf("%d\n", m);
	exit(EXIT_SUCCESS);
}
