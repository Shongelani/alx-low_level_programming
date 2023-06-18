#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (n < 6)
	{
		 printf("Last digit of %d is %d and is less than 6 and not zero\n", n,
				 lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is zero\n", n, lastDigit);
	}
	return (0);
}