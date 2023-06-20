#include "main.h"
/**
 * _isalpha - checks for alphabet7c character
 * @c: ASCII code character
 * Return: 1 if alphabetuc character and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
