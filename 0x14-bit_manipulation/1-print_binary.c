#include "main.h"

/**
 * print_binary - function thatprints the binary equivalent decimal
 * @n: value of number to print in binary
 */

void print_binary(unsigned long int n)
{
	int h, num = 0;
	unsigned long int new;

	for (h = 63; h >= 0; h--)
	{
		new = n >> h;

		if (new & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
