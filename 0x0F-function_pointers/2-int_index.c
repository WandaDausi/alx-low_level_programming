#include "function_pointers.h"
#include <stdlib.h>
/*
 * int_index - a function that searches for an integer.
 *
 * @size: number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: index or 0, -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
