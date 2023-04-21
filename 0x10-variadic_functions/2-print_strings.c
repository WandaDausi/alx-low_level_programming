#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of strings
 * Return:0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int x;
	char *s;

	va_start(ap, n);

	while (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
