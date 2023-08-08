#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function that allocates 1024 bytes for a buffer.
 * @file: The name of the file
 *
 * Return: pointer to new buffer.
 */

char *create_buffer(char *file)
{
	char *buffer_size;

	buffer_size = malloc(sizeof(char) * 1024);

	if (buffer_size == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer_size);
}

/**
 * close_file - function to close file descriptors.
 * @fd: file descriptor to be closed.
 */

void close_file(int fd)
{
	int f;

	f = close(fd);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the contents of a file
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success, exit code on failure
 *
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, x, q;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	x = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (f_from == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		q = write(f_to, buffer, x);
		if (f_to == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		x = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffer);
	close_file(f_from);
	close_file(f_to);

	return (0);
}
