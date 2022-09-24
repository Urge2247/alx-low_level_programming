#include "main.h"
#include <string.h>
/**
 * *rot13 - encodes a string using this function
 *
 * @s: a string to be added to fun
 *
 * Return: returns the encoded string using rot13
 */
char *rot13(char *s)
{
	int u;
	char *la = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *rtn = s;

	while (*s)
	{
		u = 0;
			while (la[u])
			{
				if (*s == la[u])
				{
					*s = rot13[u];
					break;
				}
				u++;
			}
			s++;
	}
	return (rtn);
}
