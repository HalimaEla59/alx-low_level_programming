#include "main.h"

/**
 * main - main entry
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fFrom, fTo, Write, Read;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fFrom = open(argv[1], O_RDONLY);
	if (fFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((Read = read(fFrom, buffer, 1024)) > 0)
	{
		Write = write(fTO, buffer, Read);
		if (Write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (Read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fFrom);
		exit(100);
	}
	if (close(fTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clode fd %d\n", fTo);
		exit(100);
	}
	return (0);
}
