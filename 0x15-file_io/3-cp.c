#include "main.h"
#include <stdio.h>

/**
 * make_buf - Allocates 1024 bytes for a buffer
 * @file: Name of the file
 *
 * Return: A pointer to the newly allocated buffer
 */

char *make_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buf);
}

/**
 * close_file - Closes the file descriptors
 * @f_disc: The file descriptor
 *
 */

void close_file(int f_disc)
{
	int i;

	i = close(f_disc);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_disc);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: Number of arguments passed to the program.
 * @argv: Argument Vector.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 */

int main(int argc, char **argv)
{
	char *buffer;
	int from, to, rd, wr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
		buffer = make_buf(argv[2]);
		from = open(argv[1], O_RDONLY);
		rd = read(from, buffer, 1024);
		to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

		do {
			if (from == -1 || rd == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
				free(buffer);
				exit(98);
			}
			wr = write(to, buffer, rd);
			if (to == -1 || wr == -1)
			{
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
				free(buffer);
				exit(99);
			}
			rd = read(from, buffer, 1024);
			to = open(argv[2], O_WRONLY | O_APPEND);

		} while (rd > 0);

		free(buffer);
		close_file(from);
		close_file(to);
	return (0);
}
