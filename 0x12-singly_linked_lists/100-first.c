#include <stdio.h>
void print_sentence(void)__attribute__((constructor));
/**
 * print_sentence - prints a sentence before the main funtion is executed
 * Return: nothing
 */
void print_sentence(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
