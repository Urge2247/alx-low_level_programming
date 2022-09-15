#include "main.h"

/**
 * test_isalpha - Test the _isalpha function
 *
 * @c: Number to pass to _isalpha function
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <=  'Z'))
		return (1);
	else
		return (0);
}
