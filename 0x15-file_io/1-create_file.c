#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file name
 * @text_content: pointer to the content
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, leng;

	if (text_content != NULL)
	{
		leng = 0;
		while (text_content[leng])
			leng++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, leng);

	if (o == -1 || w == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	close(o);

	return (1);
}
