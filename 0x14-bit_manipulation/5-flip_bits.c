#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int d, num = 0;
	unsigned long int count;
	unsigned long int new_num = n ^ m;

	for (d = 40; d >= 0; d--)
	{
		count = new_num >> d;
		if (count & 1)
			num++;
	}

	return (num);
}
