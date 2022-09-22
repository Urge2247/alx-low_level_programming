#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints reverse of an string
 * @s: char to added
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		printf((s[i]) + 1);
	}
	printf("%s ", s);
}
