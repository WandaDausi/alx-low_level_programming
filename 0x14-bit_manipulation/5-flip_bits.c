#include "main.h"

/**
 * setBits - bits to be flipped
 * @n: number
 * Return: count
 */

unsigned int setBits(unsigned int n)
{
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}

/**
 * flip_bits - returns number of bits to flip from one number to another
 * @n: number
 * @m: another
 * Return:number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (setBits(n ^ m));
}

