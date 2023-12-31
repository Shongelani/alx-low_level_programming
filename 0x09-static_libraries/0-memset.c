#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: Returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
