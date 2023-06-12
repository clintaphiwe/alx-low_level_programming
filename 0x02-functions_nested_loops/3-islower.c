

#include "main.h"

/**
 * main - Entry point
 * _islower - checks whether the passed letter is a lower case or upper case
 * int c - The parameter that will be passed to the function
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
