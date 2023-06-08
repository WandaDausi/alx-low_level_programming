#include "main.h"

/**
 * primes_num - if number is prime
 * @n: number to be checked
 * @i: interger
 * Return: 1 or 0
 */
int primes_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (primes_num(n, i - 1));
}

/**
 * is_prime_number - r prime numbers
 * @n: number
 * Return: 1 if prime, O if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primes_num(n, n - 1));
}
