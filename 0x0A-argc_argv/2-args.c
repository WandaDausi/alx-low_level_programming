#include <stdio.h>
#include <stdlib.h>

/**
 * main - printa all arguments it receives
 * @argc: counter
 * @argv: pointer to array of string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
