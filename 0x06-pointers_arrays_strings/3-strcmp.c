#include "main.h"
#include <string.h>
/**
 * _strcmp - prints comparison of two strings
 *
 * @s1: an string to be added to fun
 * @s2: another string to be added
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			break;
		}

	}
	cmp = *s1 - *s2;
	return (cmp);
}
