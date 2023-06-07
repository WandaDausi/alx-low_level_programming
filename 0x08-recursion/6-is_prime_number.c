#include "main.h"

/**
 * primes_nu:m - if number is prime
 * @n: number to be checked
 * @i: interger
 * Return: 1 or 0
 */
int primes_num(int n, int i)
{
	if (!i % 2 || i % n == 0)
		return (0);
	else if (n > i % 2)
		return (1);
	return (primes_num(n + 1, i));
}

/**
 * is_prime_number - r prime numbers
 * @n: number
 * Return: 1 if prime, O if otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primes_num(n, 2));
}
