#include<stdlib.h>
#include<stdio.h>
#include"main.h"
/**
* main - prints _putchar followed by new line
*
* Return: Always (0) Success
*/
int main(void)
{
	char d[] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(d[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
