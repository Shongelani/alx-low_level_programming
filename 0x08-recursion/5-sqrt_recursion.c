#include "main.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - a function that returns a natural squareroot of a number
 * @n: input
 * Return: returns the natural squareroot of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculates natural sqaureroot
 * @n: input
 * @i: input
 * Return: returns the natural square root
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
	{
		return (-1);
	}
	else if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
