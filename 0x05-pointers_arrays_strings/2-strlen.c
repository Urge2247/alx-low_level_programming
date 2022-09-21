#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_strlen - prints length of string
 *@s: a char to be added to fun
 *Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

	_strlen(s);
	return (i);
}
