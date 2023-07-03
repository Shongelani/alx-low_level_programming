#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
