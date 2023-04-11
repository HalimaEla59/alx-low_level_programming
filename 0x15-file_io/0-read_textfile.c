#include "main.h"

/**
 * read_textfile - read a text file and print it to POSIX std output
 * @filename: file name
 * @letters: number of lettres
 * Return: the number of letters or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t Read, Write, Close;
	int fp;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
	{
		free(buffer);
		return (0);
	}
	Read = read(fp, buffer, letters);
	if (Read < 0)
	{
		free(buffer);
		return (0);
	}
	Write = write(STDOUT_FILENO, buffer, Read);
	if (Write < 0)
	{
		free(buffer);
		return (0);
	}
	Close = close(fp);
	if (close < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (Read);
}
