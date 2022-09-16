#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed
 * Return: 0
 */
void print_numbers(void)
{
	char l = '0';

	while (l <= '9')
	{
		_putchar(l);
		l++;
	}

_putchar('\n');
}
