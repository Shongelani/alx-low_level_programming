#include "main.h"
/**
 *factorial - -a function that returns a factorail of a given number
 *@n: input
 *Return: returns the factorial of the given integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
