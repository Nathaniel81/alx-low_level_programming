#include "main.h"

/**
 * append_text_to_file - Appends text at the end of the file.
 * @filename: Name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int on, w, n, i;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			n++;
	}

	on = open(filename, O_WRONLY | O_APPEND);
	w = write(on, text_content, n);

	if (w == -1 || on == -1)
		return (-1);

	close(on);
	return (1);
}
