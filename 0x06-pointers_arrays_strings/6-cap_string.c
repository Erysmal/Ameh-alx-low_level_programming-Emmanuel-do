#include "main.h"
#include <ctype.h>

/**
 * cap_string - Function that capitalize all word of a string
 * @str: String to be capitalized
 * Return: (str)
 */
char *cap_string(char *str)
{
	char *ptr = str;

	int capital_next = 1;

	while (*ptr != '\0')
	{
		if (capital_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		capital_next = (*ptr == ' ' || *ptr ==
				'\t' || *ptr == '\n' ||
				*ptr == ',' || *ptr ==
				';' || *ptr == '.' || *
				ptr == '!' || *ptr ==
				'?' || *ptr == '"' || *
				ptr == '(' || *ptr ==
				')' || *ptr == '{' || *
				ptr == '}');
	}

	return (str);
}
