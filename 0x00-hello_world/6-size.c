#include<stdio.h>
/**
 * main - Entry point program thats prints size
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char y;
	int x;
	long int a;
	long long int b;
	float c;

printf("Size of a char:%zu byte(s)\n",(unsigned long)sizeof(y));printf("Size of a int:%zu byte(s)\n",(unsigned long)sizeof(x));
printf("Size of a long int:%zu byte(s)\n",(unsigned long)sizeof(a));
printf("Size of a long long int:%zu byte(s)\n",(unsigned long)sizeof(b));
printf("Size of a float:%zu byte(s)\n",(unsigned long)sizeof(c));
return (0);
}
