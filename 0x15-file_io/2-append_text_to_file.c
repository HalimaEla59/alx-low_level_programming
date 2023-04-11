#include "main.h"

/** append_to_text_file - appends txt at the end of file
 * @filename: file name
 * @text_content: NULL terminated string
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;
	int Write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONGLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content [len] != '\0')
		len++;

	Write = write(fd, text_content, len);
	if (Write == -1)
		return (-1);

	close(fd);
	return (1);
}
