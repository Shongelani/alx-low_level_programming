#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: rray to pointer
 * @size: is the number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
