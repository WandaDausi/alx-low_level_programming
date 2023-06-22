#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: named parameter
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	for (i = 0; i < n ; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	if (n != 0)
		return (sum);
	else
		return (0);
}
