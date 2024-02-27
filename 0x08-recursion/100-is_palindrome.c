#include <stdio.h>
#include <string.h>

/**
 * is_palindrome -  Checks if a string is palindrome or not
 * @s: Input
 * Return: 1 (success)
*/

int is_palindrome(char *s)
{
int len = strlen(s);
int i;
for (i = 0; i < len / 2; i++)
{
if (s[i] != s[len - i - 1])
{
return (0);
}
}
return (1);
}
