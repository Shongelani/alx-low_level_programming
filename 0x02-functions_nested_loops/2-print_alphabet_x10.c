#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		int i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
