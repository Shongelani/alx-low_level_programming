#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: minimum range of integers
 * @max: maximum range of integers
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	i = min;
	j = 0;

	while (i <= max)
	{
		s[j] = i;
		i++;
		j++;
	}
	return (s);
}
