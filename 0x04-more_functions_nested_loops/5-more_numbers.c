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
			if (c > 9)
			{
				putchar((c / 10) + '0');
			}
			putchar((c % 10) + '0');
			c++;
		}
		putchar('\n');
		c = 0;
		i++;
	}
}
