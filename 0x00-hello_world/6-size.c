#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of short: %lu byte(s)\n", sizeof(short));
	printf("Size of int: %lu bytes(s)\n", sizeof(int));
	printf("Size of long: %lu bytes(s)\n", sizeof(long));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	printf("Size of double: %lu byte(s)\n", sizeof(double));
	printf("Size of long double: %lu bytes(s)\n", sizeof(long double));

	return (0);
}
