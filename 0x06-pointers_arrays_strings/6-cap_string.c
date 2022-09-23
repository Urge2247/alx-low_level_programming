#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes the chars of a string
 *
 * @s: a string to be added to fun
 *
 * Return: returns a capitalized chars of string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 1;
	char *retptr = s;
	char *del = "\t\n;. ,!?\"(){}\0";

	while (*s)
	{
		if (j == 1)
		{
			if (*s >= 'a' && *s <= 'z')
			{
				*s -= 32;
			}
				j = 0;
		}

		for (i = 0; del[i]; i++)
		{
			if (*s == del[i])
				j = 1;
		}
		s++;
	}
	return (retptr);
}
