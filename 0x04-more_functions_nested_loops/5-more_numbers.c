#include "main.h"
/**
 * more_numbers - prints more numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
	int c = 0;
	int i = 0;

	while (i < 10)
	{
		while (c <= 14)
		{
			if (i < 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			c++;
		}

	_putchar('\n');
	i++;
	c = 0;
	}

}
