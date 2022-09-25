#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a given string
 *
 * @str: a string to be added to function
 *
 * Return: returns void
 */
void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}

	if ((i % 2) != 0)
		i = i + 1;

		i = i / 2;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
			i++;
	}
	_putchar(10);
}
