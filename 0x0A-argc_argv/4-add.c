#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: count
 * @argv: pointer to array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	i = 1;
	while (argv[i])
	{
		j = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += j;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
