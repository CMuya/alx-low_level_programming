#include "main.h"

/**
 * get_endianness - function that checks size of machine
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int q = 1;
	char *d = (char *) &q;

	return (*d);
}
