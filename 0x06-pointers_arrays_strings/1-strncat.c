#include "main.h"
#include <string.h>

/**
 * *_strncat - prints a concatenatio of strings
 *
 * @dest: a destination str to be added to fun
 * @src: another str to be added
 *
 * Return: returns a pointer
 */
char *_strncat(char *dest, char *src, int n)
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

	for (i = 0; i <= length1 && i < n; i++)
	{
		*(dest + (length2 + i)) = *(src + i);
	}
	if (n < length1)
	{
		for (i = 0; i <= (length1 - n); i++)
		{
			*(dest + (length2 + length1)) = '\0';
		}
	}
	return (dest);
}
