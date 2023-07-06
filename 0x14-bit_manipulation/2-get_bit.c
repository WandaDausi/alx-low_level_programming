#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: decimal
 * @index: bit index
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	j = n & i;
	if (j == i)
		return (1);

	return (0);
}
