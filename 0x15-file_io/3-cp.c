#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 */
void check1(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check2: ...
 * @check: ....
 * @file: ....
 * @f_from: ....
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
 * check3: ...
 * @check: .....
 * @file: .....
 * @f_from:....
 * @f_to:....
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

/**
 * check4 - check descriptors
 * @check4: ....
 * Return: void
 */
void check4(int check int f)
{
	if (check == -1)
	{
		dprint(STDERR_FILENO, "Error: %d\n", f);
		exit(100);
	}
}

/**
 * main - content
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int f_from, f_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check1(argc);
	f_from = open(argv[1], O_RDONLY);
	check2((ssize_t)f_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check3((ssize_t)f_to, argv[2], f_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(f_from, buffer, 1024);
		check2(lenr, argv[1], f_from, f_to);
		lenw = write(f_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check3(lenw, argv[2], f_from, f_to);
	}
	close_to = close(f_to);
	close_from = close(f_from);
	check4(close_to, f_to);
	check4(close_from, f_from);
	return (0);
}
