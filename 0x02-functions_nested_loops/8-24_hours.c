#include "main.h"
/**
 * jack_bauer - prints every minutes of jack b
 * Return: 0
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;
	int hr_rem;
	int min_rem;

	while (hrs <= 23)
	{
	while(mins <= 59)
	{
	min_rem = mins % 10;
	hr_rem = hrs % 10;
	_putchar(hrs / 10 + '0');
	_putchar(hr_rem + '0');
	_putchar(':');
	_putchar(mins / 10 + '0');
	_putchar(min_rem + '0');
	mins++;
	_putchar('\n');
	}
	hrs++;
	mins = 0;

	}

}
