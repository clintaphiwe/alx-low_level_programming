#include <stdio.h>

/**
 * _strlen_recursion - Prints the length of a string
 * @s: Input
 * Return: Success
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}
