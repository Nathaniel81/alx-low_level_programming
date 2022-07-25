#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int on, n, w, i;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (i = 0; *(text_content + i); i++)
			n++;
	}

	on = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(on, text_content, n);

	if (w == -1 || on == -1)
		return (-1);

	close(on);
	return (1);
}
