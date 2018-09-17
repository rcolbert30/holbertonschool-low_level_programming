#include <stdio.h>
#include "holberton.h"
/**
 * jack_bauer - prints evert minute of the day from 0:00 to 23:59
 * Return: 0
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
		}
	return (0);
}
