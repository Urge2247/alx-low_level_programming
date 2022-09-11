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
	if (n > 0)
	{
		printf("98 is positive\n");
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
	else if (n < 0)
	{
		printf("-98 is negative\n");
	}
	else
		printf("Display error\n");
	return (0);
}
