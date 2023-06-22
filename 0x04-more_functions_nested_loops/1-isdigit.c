#include "main.h"
/**
 * _isdigit - checks for lowercase characters
 * @c: ASCII code character
 * Return: 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
