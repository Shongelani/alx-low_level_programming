#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: input
 * @b: input 2
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
