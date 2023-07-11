#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
void check1(int argc)
{
}

/**
 */
void check2(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(98);
	}
}

/**
 *
 */
void check3(ssize_t check, char *file, int f_from, int f_to)
{
	if (check == -1)
	{
		dprint();
		if (f_from != -1)
			close(f_from);
		if (f_to != -1)
			close(f_to);
		exit(99);
	}
}
