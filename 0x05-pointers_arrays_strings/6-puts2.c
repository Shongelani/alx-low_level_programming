#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 *@str: input
 *Return: nothing
 */
void puts2(char *str)
{
	int i;
	int strlength;

	strlength = strlen(str);

	for (i = 0; i < strlength; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
