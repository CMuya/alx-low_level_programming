#include "main.h"

/**
 * _isupper - A Function that writes uppercase letters
 * @c: use char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
