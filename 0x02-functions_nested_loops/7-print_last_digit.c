#include "main.h"

/**
 * print_last_digit - Prints last digitvof a number
 *
 * @n: Charaacter needed to be checked
 *
 * Return: Value of last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	

	last_digit = n % 10;

	if (ladt_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
