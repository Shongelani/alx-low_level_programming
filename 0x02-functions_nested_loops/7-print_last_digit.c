#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: integer input
 * Return: last digit
 */
int print_last_digit(int i)
{
	int n = i % 10;

	if (n > 0)
	{
		_putchar(n);
		return (n);
	}
	else
	{
		_putchar(-n);
		return (-n);
	}

}
