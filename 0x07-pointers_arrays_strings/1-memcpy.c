#include"main.h"

/**
 * *_memcpy -  copies memory area
 * @dest:string to copy to
 * @src:string to copy from
 * @n:bytes to be copied
 * Return:char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
