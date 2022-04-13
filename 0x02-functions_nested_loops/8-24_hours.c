#include "main.h"
/**
*jack_bauer - every minute of the day
*
* Return: Always 0
*/
void jack_bauer(void)
{
int minutes;
int hours;

hours = 0;
while (hours < 24)
{
	minutes = 0;
	while (minutes < 60)
	{
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes % 10) + '0');
		_putchar('\n');
		minutes++;

	}
	_putchar((hours / 10) + '0');
	_putchar((hours % 10) + '0');
	hours++;
}
}
