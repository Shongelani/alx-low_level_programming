#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: no return
 */
void times_table(void)
{
	int i, j;
	int product = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; i <= 9; i++)
		{
			product = i * j;
			_putchar(product);
		}
		_putchar('\n');
	}
}
