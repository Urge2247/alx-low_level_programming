#include <stdio.h>
#include "main.h"
/**
* print_numbers - prints numbers from 0 to 9
*
* Return: returns nothing
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 2 && i != 4)
			putchar(i);
	}
	putchar(8);
}
