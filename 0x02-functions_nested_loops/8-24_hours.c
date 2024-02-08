#include <stdio.h>
#include "main.h"

/**
 * print_time - Function that prints the time.
 * @hour: Hour argument
 * @minute: Minute argument
 * Return: Always 0
 */

void print_time(int hour, int minute)
{
printf("%02d:%02d\n", hour, minute);
}

/**
 * jack_bauer - Function that calculates and prints jack bauer time.
*/


void jack_bauer(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++)
{
print_time(hour, minute);
}
}
}
