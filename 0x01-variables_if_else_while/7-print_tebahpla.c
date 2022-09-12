#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints the alphabet in reverse program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{

	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{	
		putchar(ch);
	}

	putchar("\n");
	return (0);
}
