#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory destination
 * @src: memory copied from
 * @n: bytes to be copied
 * Return: Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
