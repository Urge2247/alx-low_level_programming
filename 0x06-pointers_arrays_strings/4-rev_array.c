#include "main.h"
#include <string.h>
/**
 * reverse_array - prints a string in reverse form
 *
 * @a: an integer represents an array
 * @n: an integer to be added
 *
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int top, bot;

	for (top = 0, bot = (n - 1) ; top < bot; top++, bot--)
	{
		int temp = *(a + top);
		*(a + top) = *(a + bot);
		*(a + bot) = temp;
	}
}
