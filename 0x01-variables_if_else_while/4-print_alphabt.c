#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A program that prints the alphabet followed by new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

