#include "main.h"

/**
 * _strchr - Entry Point
 * @s: Input
 * @c: Input
 * Return: 0 (SUCCESS)
*/

char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
