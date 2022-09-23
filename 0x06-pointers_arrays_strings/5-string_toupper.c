#include "main.h"
#include <string.h>
/**
 * string_toupper - prints conversion of lowercase string chars to uppercase
 *
 * @s: a string to be added to function
 *
 * Return: returns an uppercased string
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 97 && s[c] <= 122)
		{
			*(s + c) = (s[c] - 32);
		}
		c++;
	}
	return (s);
}
