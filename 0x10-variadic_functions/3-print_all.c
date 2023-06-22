#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: anything
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *str;
	va_list ap;

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				j = 0;
				break;
			case 'i':
				printf("%i", va_arg(ap, int));
				j = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				j = 0;
				break;
			case 's':
				str = va_arg(ap, char *);
				printf("%s", str);
				if (str == NULL)
					printf("(nil)");
				j = 0;
				break;
			default:
				j = 1;
				break;
		}
		if (format[i + 1] != '\0' && j == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
