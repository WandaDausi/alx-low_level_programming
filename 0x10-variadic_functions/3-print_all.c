#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to a function
 * Return:0
 */
void print_all(const char * const format, ...)
{
	va_list yangu;
	int x;
	int g;
	char *z;

	va_start(yangu, format);
	x = 0;
	while (format != NULL && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(yangu, int));
				g = 0;
				break;
			case 'i':
				printf("%i", va_arg(yangu, int));
				g = 0;
				break;
			case 'f':
				printf("%f", va_arg(yangu, double));
				g = 0;
				break;
			case 's':
				z = va_arg(yangu, char*);
				if (z == NULL)
					z = "(nil)";
				printf("%s", z);
				g = 0;
				break;
			default:
				g = 1;
				break;
		}
		if (format[x + 1] != '\0' && g == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(yangu);
}
