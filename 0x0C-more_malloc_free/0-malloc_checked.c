#include "main.h"
/**
 * malloc_checked - a funtion that allocates memory using malloc
 * @b: input
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;
	
	pointer= malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
