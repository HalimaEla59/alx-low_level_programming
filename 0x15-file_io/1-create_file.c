#include "main.h"

/**
 * create_file - craetes a new file
 * @filename: file name
 * @text_content: string to write, ends with NULL
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int Write;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fp == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;
	Write = write(fp, text_content, len);
	if (Write == -1)
		return (-1);

	close(fp);
	return (1);
}
