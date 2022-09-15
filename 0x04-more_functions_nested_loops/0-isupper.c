#include "main.h"
/**
 * _isupper - prints uppercase letters
 * @c: int to be added to fun
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
