#include "main.h"

/**
 * largest_number - this fun returns the largest of 3 numbers
 *
 * @a: a first integer to be added
 * @b: a second integer to be added
 * @c: a third integer to be added
 *
 * Return: returns a largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
