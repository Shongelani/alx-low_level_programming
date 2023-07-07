#include <stdio.h>
#include "main.h"
/**
 * main - Writes a program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguements
 * Return: returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
