#include "main.h"

/**
 * print_number - Function that print ab integer
 * @n: Integer
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('_');
		n = -n;
	}

	if (n / 10 != 0)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
