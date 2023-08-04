#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: input 1
 * @m: input 2
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int result = n ^ m;
	unsigned int i = 0;

	while ( result)
	{
		result &= (result - 1);
		i++;
	}
	return (i);
}
