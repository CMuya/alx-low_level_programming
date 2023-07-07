#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @d: The character to be checked
 * Return: 1 if d is a letter, 0 otherwise
 */

int _isalpha(int d)
{
	return ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'));
}
