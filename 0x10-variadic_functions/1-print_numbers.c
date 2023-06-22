#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		;
	}
	for (i = 0; i < n; i++)
	{
		i = va_arg(ap, int);
		printf("%d\n", i);
		if (i < n - 1)
			printf("%s\n", separator);
	}
	va_end(ap);
}
