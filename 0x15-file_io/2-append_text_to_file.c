#include "main.h"

/**
 * _strlen - finds length of a string
 * @str: pointer to the string
 * Return: lenghth of string
 */
size_t _strlen(char *str)
{
	size_t i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: ponter to name of file
 * @text_content: pointer to the NULL terminater
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	ssize_t leng;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
		leng = write(i, text_content, _strlen(text_content));
	close(i);
	if (leng == -1)
		return (-1);
	return (1);
}
