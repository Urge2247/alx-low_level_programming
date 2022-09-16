#include <stdio.h>
#include "main.h"
/**
* print_numbers - prints numbers from 0 to 9
* @i: int to be added to fun
* Return: return nothing
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar(10);
}
