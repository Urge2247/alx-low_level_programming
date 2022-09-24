#include "main.h"
#include <string.h>

/**
 * leet - prints encoded form of 1337
 *
 * @s: a string to be added to fun
 *
 * Return: returns an edcoded string
 */
char *leet(char *s)
{
	int i;
	char *org = "aAeEoOtTlL";
	char *coded = "4433007711";
	char *rtn = s;

	while (*s)
	{
		i = 0;
		while (org[i])
		{
			if (*s == org[i])
			{
				*s = coded[i];
				break;
			}
			i++;
		}
		s++;
	}
	return (rtn);
}
