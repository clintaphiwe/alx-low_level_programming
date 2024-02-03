#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Function  checks whether the input is alpha or not
 * @c: input to be checked
 * Return: 0 (Success)
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
