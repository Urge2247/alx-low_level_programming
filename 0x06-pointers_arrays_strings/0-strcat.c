#include "main.h"
#include <string.h>

/**
 * *_strcat - prints concatenation of strings
 *
 * @dest: a destination string to be added to fun
 * @src: another source string to be added
 *
 * Return: returns a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int length1 = 0;
	int length2 = 0;

	while (*(src + length1) != '\0')
	{
		length1++;
	}
	while (*(dest + length2) != '\0')
	{
		length2++;
	}
	for (i = 0; i <= length1; i++)
	{
		*(dest + (length2 + i)) = *(src + i);
	}
	return (dest);
}
