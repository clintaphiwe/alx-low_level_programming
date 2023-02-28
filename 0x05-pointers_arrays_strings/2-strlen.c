#include "main.h"

/**
 * _strlen - Function that checks the length of a string
 * @s:is a pointer for a string to check
 *Return: int length of the string
 */

int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;
return (length);
}
