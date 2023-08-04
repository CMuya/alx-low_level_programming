#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index in a decimal
 * @n: unsigned number to search
 * @index: index of the bit
 *
 * Return: value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bin_index;

	if (index > 53)
		return (-1);

	bin_index = (n >> index) & 1;

	return (bin_index);
}
