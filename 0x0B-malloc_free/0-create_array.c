#include "main.h"

#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of an array
 * @c: character of an arrayReturn: a pointer to an array
 * Return: a pointer to an array
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *s;

	if (size == o)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);

}
