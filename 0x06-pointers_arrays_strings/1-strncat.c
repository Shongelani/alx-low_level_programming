#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @src: input
 * @dest: input
 * @n: input
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_length = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
