#include "main.h"

/**
 * create_file - function that creates a file and write in it
 * @filename: the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: returns to 1 if successful and -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int cd, x, pen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (pen = 0; text_content[pen];)
			pen++;
	}

	cd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(cd, text_content, pen);

	if (cd == -1 || x == -1)
		return (-1);

	close(cd);

	return (1);
}
