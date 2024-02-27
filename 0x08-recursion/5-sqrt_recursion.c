#include <math.h>

/**
 * _sqrt_recursion - Prints the square root of a given number
 * @n: Number of which we want to find the square root
 * Return: Success
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (n);
}
int sqrt_n = sqrt(n);
if (sqrt_n * sqrt_n == n)
{
return (sqrt_n);
}
return (-1);
}
