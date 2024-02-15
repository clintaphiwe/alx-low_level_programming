#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: the string
 * @needle: the substring to search for
 * Return: string
*/

char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
char *p1 = haystack;
char *p2 = needle;
while (*++p2)
{
p1 = haystack;
while (*p1)
{
if (*p1++ == *needle && strncmp(p1, needle, strlen(needle)) == 0)
{
return (haystack);
}
}
}
return (NULL);
}
