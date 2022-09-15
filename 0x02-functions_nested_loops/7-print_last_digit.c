#include "main.h"
/**
 * print_last_digit - prints the last digit a given number
 * @r: int number to be passed to the func
 * Return: 0
 */
int print_last_digit(int r)
{
	int last_digit = r % 10;

	if (last_digit < 0)
		last_digit *= -1;

	 _putchar(last_digit + '0');

       return last_digit;

}
