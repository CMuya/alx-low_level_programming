#include <stdio.h>
/**
 * main - A programm that prints different computer sizes
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeofa(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeofa(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeofa(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeofa(d));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeofa(f));
return (0);
}
