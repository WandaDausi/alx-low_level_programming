#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two integers
 * @a: int
 * @b: int
 * Return: ...
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - ...
  * @a: int
  * @b: int
  *
  * Return: ...
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - ...
  * @a: int
  * @b: int
  *
  * Return: ...
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 * @a: int
 * @b: int
 * Return: ....
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
