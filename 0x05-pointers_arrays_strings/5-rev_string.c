#include "main.h"
#include "2-strlen.c"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - prints reverse of str
 * @s: string to be added for printing
 */
void rev_string(char *s)
{
	char c;
		int i;

	for (int::size_type i = 0; i < strlen(s) / 2; i++)
	{
		c = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = c;
	}

}
