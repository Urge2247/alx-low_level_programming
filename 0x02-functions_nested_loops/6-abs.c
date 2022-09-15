#include "main.h"
#include <stdio.h>
/**
 * _abs - prints abs of a number
 * @r: - is the int number to be passed to fun
 * Return: 0
 */
int _abs(int r)
{
	if (r > 0 || r == 0)
	{
		return (r);
	}
	else
		return (r * -1);
}
