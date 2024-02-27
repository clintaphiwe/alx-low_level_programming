#include <stdio.h>
/**
 * _pow_recursion - calculates the value of x to the power of y
 * @x: the value
 * @y: the value that x will be raised to
 * Return: (0) SUCCESS
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
