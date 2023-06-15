#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: count
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, count;
	int coin[] = {25, 10, 5, 2, 1};
	unsigned int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
		count = 0;

	if (sum < 0)
	{
		printf("0\n");
		return (0);
	}

	i = 0;
	while (i < 5 && sum >= 0)
	{
		while (sum >= coin[i])
		{
			count++;
			sum -= coin[i];
		}
		i++;

	}
	printf("%d\n", count);
	return (0);
}
