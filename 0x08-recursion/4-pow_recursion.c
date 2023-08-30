#include "main.h"
#include <math.h>
/**
 * _pow_recursion - is the function to power
 * @x: is the first integer
 * @y: is the power value
 * Return: as 0 always
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x,y - 1));
}
