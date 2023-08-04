#include "main.h"

/**
 * set_bit - sets the value of bit at a given index to 1
 * @n: pointer to the unsigned int number
 * @index: index set to 0
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 50)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
