#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: input
 * Return: return sum of all its parameters, or else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);
	return (sum);
}
