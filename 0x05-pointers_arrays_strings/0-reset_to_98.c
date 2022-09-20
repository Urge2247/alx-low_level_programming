#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - prints reset to 98
 * @n: int to be added to fun
 * Return: returns void.
 */
void reset_to_98(int *n)
{
	int p = *n;

	*p = &n;

	printf("%d\n", n);
	reset_to_98(&n);
	printf("%d\n", n);
}
