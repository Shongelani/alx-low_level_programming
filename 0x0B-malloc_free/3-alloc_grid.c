#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: array width
 * @height: array height
 * Return: returns a two dimensional array of integers;
 */
int **alloc_grid(int width, int height)
{
	int i;
	int** s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(int) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		int j;

		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(s[j]);
			}
			free(s[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}

