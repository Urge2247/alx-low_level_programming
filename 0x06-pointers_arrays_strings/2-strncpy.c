#include "main.h"
#include <string.h>

/**
 * _strncpy - prints copies length of one string to another string
 *
 * @dest: a destination string to be added to fun
 * @src: another source string to be added
 * @n: an integer to be added
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	int length1 = 0;

	while (*(src + length1) != '\0')
	{	
		length1++;
	}

	for (i = 0; i < length1 && i < n; i++)
	{
		*(dest + (i)) = *(src + i);
	}
	if (length1 < n)
	{
		for (j = 0; length1 < n; j++, length1++)
		{
			*(dest + (i + j)) = '\0';
		}
	}
	return (dest);
}

