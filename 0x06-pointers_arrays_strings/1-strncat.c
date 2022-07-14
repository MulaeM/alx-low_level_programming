#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: string to be appended upon
 * @src: string copleted at the end of dest
 * @n: parameter to compare indecx to
 * Return: returns new concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
	dest_len++;

for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
return (dest);

}
