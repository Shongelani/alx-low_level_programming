#include "main.h"

int prime_check(int n, int i);
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input
 * Return: returns 1 if n is a prime number and 0 if otherwise
 */
int is_prime_number(int n)
{
	return (prime_check(n, 1));
}
/**
 * prime_check - a funtion that checks for a prime number
 * @n: input
 * @i: input
 * Return: 1 if prime or 0 if otherwise
 */
int prime_check(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (prime_check(n, i + 1));
	}
}
