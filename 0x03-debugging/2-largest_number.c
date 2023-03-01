#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: First int
 * @b: Second int
 * @c: Third int
 * Return: Returns the lsrgest number (Success)
 */

int largest_number(int a, int b, int c)
{
int largest = b;

if (a > b)
{
largest = a;
}
else if (c > b)
{
largest = c;
}

return (largest);
}
