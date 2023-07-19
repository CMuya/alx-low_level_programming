#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints name using pointer to function
 * @name: The string to add
 * @f: the pointer to function
 * Return: to nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
