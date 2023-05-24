#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Prints the lower alphabet with new
 */


void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');

}
