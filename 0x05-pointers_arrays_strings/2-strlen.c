#include "main.h"

/**
 * _strlen - Function that returns lenth of string
 * @s: String
 * Return: (length)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
