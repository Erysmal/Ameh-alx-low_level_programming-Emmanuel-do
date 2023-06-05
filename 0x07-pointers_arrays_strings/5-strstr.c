#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
        char *n = needle;


	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	while (*h != '\0')
	{
		if (*h == *n)
		{
			char *temp_h = h;
			char *temp_n = n;

			while (*temp_n != '\0' && *temp_h == *temp_n)
			{
				temp_h++;
				temp_n++;
			}
			if (*temp_n == '\0')
			{
				return (h);

			}
		}
		h++;

	}
	return (NULL);
}
