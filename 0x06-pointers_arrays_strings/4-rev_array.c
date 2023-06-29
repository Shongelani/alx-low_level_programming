#include "main.h"
/**
 * reverse_array - a function that reverses contents of an array
 * @a: input
 * @n: input
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}

}
