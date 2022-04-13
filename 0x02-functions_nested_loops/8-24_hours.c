#include "main.h"
/**
*jack_bauer - every minute of the day
*
* Return: Always 0
*/
void jack_bauer(void)
{
	int hours;
	int minits;
	
	hours = 0;
	while (hours < 24)
	{
		minits = 0;
		while (minits < 59)
		{
			_putchar(':');
			_putchar((minits / 10) + '0');
			_putchar((minits % 10) + '0');
			minits++;
		}

		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		hours++;
	}
}
