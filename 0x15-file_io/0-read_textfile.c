#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of file to be printed
 * @letters: letters
 * Return: NULL or number or actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *acts;

	if (filename == NULL)
		return (0);

	acts = malloc(sizeof(char) * letters);
	if (acts == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, acts, letters);
	w = write(STDOUT_FILENO, acts, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(acts);
		return (0);
	}
	free(acts);
	close(o);

	return (w);
}
