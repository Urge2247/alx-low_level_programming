#include "main.h"

/**
 * _islower - prints whether a character is lower or not
 * @c: Number to pass to _islower function
 * Return: 0
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
