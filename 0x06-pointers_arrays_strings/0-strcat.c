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

	while (*(src + len1) != '\0')
	{
		len1++;
	}
	while (*(dest + len2) != '\0')
	{
		len2++;
	}
	for (i = 0; i <= len1; i++)
	{
		*(dest + (len2 + i)) = *(src + i);
	}
	return (dest);
}
