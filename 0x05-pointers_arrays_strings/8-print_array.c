#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @a: input
 * @n: number of elements of the array to be printed
 * Return: returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
