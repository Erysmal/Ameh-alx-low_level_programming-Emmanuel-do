#include "main.h"

/**
 * print_line - Function that printe straight line
 * @n: Cjaracter of the straight line
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');

	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
