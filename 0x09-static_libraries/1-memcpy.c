#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: is destination memory
 * @src: is source memory
 * @n: number of byte to be copied
 * Return: string copied from code
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
