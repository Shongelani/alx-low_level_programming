#include "main.h"
/**
 * str_concat -  a function that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int length1, length2;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = 0;
	while (s1[length1] != '\0')
	{
		length1++;
	}
	length2 = 0;
	while (s2[length2] != '\0')
	{
		length2++;
	}
	s = malloc(sizeof(char) * (length1 + length2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	length1 = 0;
	length2 = 0;
	while (s1[length1] != '\0')
	{
		s[length1] = s1[length1];
		length1++;
	}
	while (s2[length2] != '\0')
	{
		s[length1 + length2] = s2[length2];
		length2++;
	}
	s[length1 + length2] = '\0';
	return (s);
}
