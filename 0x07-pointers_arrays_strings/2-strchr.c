#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @c: input character
 * @s: input string
 * Return: Returns a pointer to the first occurrence of the character c
 * in the string s
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
