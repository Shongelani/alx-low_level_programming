#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input
 * Return: returns nothing
 */
void rev_string(char *s)
{
	int i;
	int temp;
	int strlength;

	strlength = strlen(s);

	for (i = 0; i < strlength / 2; i++)
	{
		temp = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = temp;
	}
}
