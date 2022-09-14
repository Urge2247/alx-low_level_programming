#include "main.h"

/**
 * _islower - prints whether a character is lower or not
 *
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
