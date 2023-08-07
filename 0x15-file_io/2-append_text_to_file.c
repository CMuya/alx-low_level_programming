#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The string to add at end of the file.
 *
 * Return: function success 1 if it fails -1.
 *
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int q, z, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	q = open(filename, O_WRONLY | O_APPEND);
	z = write(q, text_content, len);

	if (q == -1 || z == -1)
		return (-1);

	close(q);

	return (1);
}
