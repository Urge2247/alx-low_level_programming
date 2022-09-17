#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal
 * @n: an int to be added
 * Return: returns void
 */
void print_diagonal(int n)
{
	int l, sp;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (sp = 0; sp < l; sp++)
			{
				putchar(' ');
			}
			putchar('\\');

			if (l == (n -1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
