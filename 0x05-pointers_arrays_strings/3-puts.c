#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: a parameter to _puts function
 */

void _puts(char *str)
{

	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
}
	_putchar('\n');
}
