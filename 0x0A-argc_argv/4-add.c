#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * num_check - checks for a number
 * @str: array
 * Return : always 0
 */
int num_check(char *str)
{
	int i = 0;
	int length = strlen(str);

	while (i < length)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum, convert;

	i = 1;

	while (i < argc)
	{
		if (num_check(argv[i]))
		{
			convert = atoi(argv[i]);
			sum += convert;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
