#include "main.h"

/**
 * wildcmp - Compares two strings and checks if they are identical.
 * @s1: The first string.
 * @s2: The second string, which can contain the special character *.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '\0')
return (*s1 == '\0');
if (*s2 == '*')
}
if (*(s2 + 1) == '\0') /* If * is the last character in s2 */
return (1);
if (wildcmp(s1, s2 + 1)) /* Match * with empty string */
return (1);
if (*s1 && wildcmp(s1 + 1, s2)) /* Match * with one or more characters in s1 */
return (1);
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1)); /* Compare next characters */
}
return (0);
}
