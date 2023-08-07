#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Reads text file and prints to POSIX.
 * @filename: name of file being read
 * @letters: number of letters to read and print
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t cd;
	ssize_t w;
	ssize_t b;

	cd = open(filename, O_RDONLY);
	if (cd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	b = read(cd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, b);

	free(buffer);
	close(cd);
	return (w);
}
