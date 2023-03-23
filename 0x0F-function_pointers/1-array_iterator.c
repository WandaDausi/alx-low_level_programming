#include "function_pointers.h"
#include <stdlib.h>
/*
 * array_iterator - a function that executes a function given as a parameter
 * on each element array
 * @size: size of array
 * @action: a pointer to the function to be used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
