#include "main.h"
#include <string.h>
/**
 * print_array - the function which prints an array of n integers
 * @a: an integer given array
 *
 * @n: an integer number of elements to print
 *
 * Return: returns void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
