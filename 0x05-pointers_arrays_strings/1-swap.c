#include <stdio.h>
#include "main.h"
/**
 *swap_int - prints swaps of 2 ints
 *@a: an int to be added to fun
 *@b: another int to be added
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	a = b;
	*b = temp;
}
