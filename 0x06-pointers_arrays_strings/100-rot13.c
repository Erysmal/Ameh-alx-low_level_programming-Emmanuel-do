#include "main.h"

/**
 * rot13 - Function that encode a string using rot13
 * @str: String to be encoded
 * Return: (str)
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'M') || (*ptr >= 'a' && *ptr <= 'm'))
		{
			*ptr += 13;
		}
		else if ((*ptr >= 'N' && *ptr <= 'Z') || (*ptr >= 'n' && *ptr <= 'z'))
		{
			*ptr -= 13;
		}

		ptr++;
	}
	return (str);
}
