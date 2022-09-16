#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed
 * Return: 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	c++;
	}

_putchar('\n');
}
