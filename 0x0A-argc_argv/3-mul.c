#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: strings
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int mult, i;

	i = atoi(argv[1]);
	mult = atoi(argv[2]);
	printf("%d\n", mult * i);

	return (0);

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
}
