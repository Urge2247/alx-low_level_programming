#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9 followed
 * @i: int to be added to fun
 * Return: nothing
 */
void print_numbers(void)
{
	int i = 28;

	while (i <= 38)
	{
		putchar(i);
		i++;
	}

	putchar(10);
}
