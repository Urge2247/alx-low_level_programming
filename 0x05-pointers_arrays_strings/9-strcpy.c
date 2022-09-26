#include "main.h"
#include <string.h>
/**
 * _strcpy - the fun copies a string from a source to a destination.
 *
 * @dest: a destination string to be added to fun
 * @src: another string to be added source string
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	int length = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (x = 0; x <= length; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
