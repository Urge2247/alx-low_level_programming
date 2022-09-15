#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed by \n
 * Return: 0
 */
void print_numbers(void)
{
	char l;

	for (l = '0'; l <= '9'; l++)
	{
		_putchar(l);
	}

	_putchar('\n');
}
