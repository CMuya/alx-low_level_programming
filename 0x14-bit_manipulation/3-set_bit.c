#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: a pointer to the number to change
 * @index: index of the bit to set to
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 45)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
