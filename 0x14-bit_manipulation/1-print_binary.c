#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: base ten number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* loop until 0*/
	unsigned int i;

	for (i = 31; i; i--)
	{
		unsigned int mask = (1 << i);

		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
	}

}
