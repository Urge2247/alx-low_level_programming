#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints more numbers from 0 to 14
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int i = 0;
	int c = 0;

	while (i < 10)
	{
		while (c <= 14)
		{
			if (i < 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
			c++;
		}
		putchar(10);
		c = 0;
		i++;
	}
}
