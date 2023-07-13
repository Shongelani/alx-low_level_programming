#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: input string
 * @s2: input string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: returns a new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int length1, length2, i, j;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n < length2)
	{
		s = malloc(sizeof(char) * (length1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (length1 + length2 + 1));
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		s[i] = s1[i];
	}
	while (n < length2 && i < (length1 + n))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	while (n >= length2 && i < (length1 + length2))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] ='\0';
	return (s);
}
