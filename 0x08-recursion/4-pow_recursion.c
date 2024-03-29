#include "main.h"

/**
 * _pow_recursion - Function return value of x raised to the power of y
 * @x: the value to raise
 * @y: to power
 *
 * Return: To the result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
