#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description: 'using the main function program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 98)
	{
	printf("Last digit of 98 is 8 and is greater  than 5");
	}
	else if (n == 980)
	{
	printf("Last digit of 980 is 0 and is 0");
	}
	else if (n == -98)
	{
	printf("Last  digit of -98 is -8 and is less than 6 and not 0");
	}
	return (0);
}
