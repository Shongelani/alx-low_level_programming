#include "main.h"
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of elemts in array
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	s = malloc(nmemb * size);

	if (s == NULL)
	{
		return (NULL);
	}
	memset(s, 0, (nmemb * size));
	return (s);
}
