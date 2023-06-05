#include "main.h"

/**
 * print_diagonals - Function that draw diagonal
 * @n: Character to be called
 *
 * Return: 
 */
void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	

	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
	}

	_putchar('\n');
}

