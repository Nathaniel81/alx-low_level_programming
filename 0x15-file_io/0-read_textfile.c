#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the text file
 * @letters: Number of letters to read and print
 *
 * Return: Actual number of letters it could read and print, or 0 if it fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, on, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	on = open(filename, O_RDONLY);
	r = read(on, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

		if (on == -1 || r == -1 || w == -1 || w != r)
		{
			free(buffer);
				return (0);
		}

	free(buffer);
	close(on);
	return (w);
}
