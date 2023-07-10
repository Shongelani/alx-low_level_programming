#include "main.h"
/**
 * _strdup -  a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: input string
 * Return: returns a pointer to the duplicated string, or null if insufficient
 * memory was found
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}
