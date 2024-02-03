#include "main.h"

/**
 * is_alpha - Function  checks whether the input is alpha or not
 * @c: input to be checked
 * Return: 0 (Success)
 */

int is_alpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
return (0);
}
