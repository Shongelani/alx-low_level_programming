#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer to an array
 * @size: size is the size of the array
 * @action: a pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if( array == NULL || action == NULL)
	{
		return;
	}

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
