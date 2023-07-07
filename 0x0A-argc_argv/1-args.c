#include <stdio.h>
#include "main.h"

/**
 * main - Function that prints the number of arguments passed
 * @argc: the number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
