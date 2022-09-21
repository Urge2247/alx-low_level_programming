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
	int len = strlen(s);

	int i;

	for (i = len - 1; i >= 0; i--)
	{
			printf("%s ", &(s[i]) + 1);
	}
	printf("%s ", s);
}
