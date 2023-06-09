#include <stdio.h>

/**
 * main - prints its name
 * @argc: counts
 * @argv: pointer to string of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
