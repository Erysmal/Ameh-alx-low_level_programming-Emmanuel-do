#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in 10 new lines
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);

		}
		_putchar('\n');
	}
}
