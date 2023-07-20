#include "stdarg.h"
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - a funtion that prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	char *s, *separator = "";
	const char *ptr = format;
	va_list args;

	va_start(args, format);
	if (*ptr)
	{
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				printf("%s%s", separator, s);
				break;
			default:
				ptr++;
				continue;
		}
		separator = ", ";
		ptr++;
	}
	}
	printf("\n");
	va_end(args);
}
