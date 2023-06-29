#include "main.h"
/**
 * rot13 - afunction that encodes a string using rot13
 * @c: input
 * Return: returns the encoded string
 */
char *rot13(char *c)
{
	char *n = c;

	while (*n != '\0')
	{
		if((*n >= 'A' && *n <= 'M') || (*n >= 'a' && *n >= 'm'))
		{
			*n += 13;
		}
		else if ((*n >= 'N' && *n <= 'Z') || (*n >= 'n' && *n <= 'z'))
		{
			*n -= 13;
		}
		n++;
	}
	return (c);
}
