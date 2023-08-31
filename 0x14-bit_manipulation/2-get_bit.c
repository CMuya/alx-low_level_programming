#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get_bit;

	if (index > 63)
		return (-1);

	get_bit = (n >> index) & 1;

	return (get_bit);
}
