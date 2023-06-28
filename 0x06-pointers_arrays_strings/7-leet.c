#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @c: input value
 * Return: returns tge encoded string
 */
char *leet(char *c)
{
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == arr1[j])
			{
				c[i] = arr2[j];
			}
		}
	}
	return (c);
}
