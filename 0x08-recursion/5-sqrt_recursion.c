#include "main.h"

/**
 * sqr_recur - finds the natural square root
 * @a: number
 * @b: number
 * Return: square root
 */
int sqr_recur(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqr_recur(a + 1, b));
}

/**
 *  _sqrt_recursion - function that return the natural square root of a number
 *  @n: number
 *  Return: square root number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqr_recur(1, n));
}
