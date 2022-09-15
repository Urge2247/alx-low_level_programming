#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers from 0 to 9 followed by \n
 * @i: int to be  displayed using fun
 * Return: 0
 */
void print_numbers(void)
{

	for (char i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
