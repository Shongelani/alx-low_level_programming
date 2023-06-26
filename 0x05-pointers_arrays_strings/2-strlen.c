#include "main.h"
/**
 * int _strlen -  a function that returns the length of a string.
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int stlength = 0;

	while(s[stlength] != '\0')
	{
		stlength++;
	}
	return (stlength);
}
