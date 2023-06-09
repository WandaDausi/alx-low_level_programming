#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed to it
 * @argc: number of arguments
 * @argv: pointer to string of pointers
 * Return:0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
