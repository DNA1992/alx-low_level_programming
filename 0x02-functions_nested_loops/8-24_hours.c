#include "main.h"
/**
*jack_bauer - every minute of the day
*
* Return: Always 0
*/
void jack_bauer(void)
{
int minutes, hours;

minutes = 0;
while (minutes < 60)
{
	hours = 0;
	while (hours < 24)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		hours++;
	}
	_putchar(':');
	_putchar((minutes / 10) + '0');
	_putchar((minutes % 10) + '0');
	_putchar('\n');
	minutes++;
}
}
