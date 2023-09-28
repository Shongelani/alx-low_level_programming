#include "main.h"
/**
 * print_binary -  a function that prints the binary representation of a number
 * @n: integer to print in binary
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int current;
	int num_bits = sizeof(unsigned long int) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
		_putchar('0');
}
