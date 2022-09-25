#include "main.h"
#include <string.h>
/**
 * rev_string - prints reverse of str
 * @s: string to be added for printing
 */
void rev_string(char *s)
{
	int length = 0;
	int top, bot;

	while (*(s + length) != '\0')
		length++;
	length--;

	for (top = 0, bot = length; top < bot; top++, bot--)
	{
		char temp = *(s + top);
		*(s + top) = *(s + bot);
		*(s + bot) = temp;
	}
}
