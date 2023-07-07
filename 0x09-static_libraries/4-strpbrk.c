#include "main.h"

/**
 * _strpbrk - entry point
 * @b: the input
 * @accept: the input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *b, char *accept)
{
	int k;


	while (*b)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*b == accept[k])
		return (b);
		}
	b++;
	}


return ('\0');
}
