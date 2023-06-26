#include "main.h"
/**
 * puts_half -  a function that prints half of a string, followed by a new line
 * @str: input
 * Return: returns nothing
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int secondHalf = length / 2;
	int i;

	for (i = secondHalf; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
