#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *stri;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		stri = va_arg(ap, char *);
		if (stri == NULL)
			stri = "(nil)";
		printf("%s", stri);
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
