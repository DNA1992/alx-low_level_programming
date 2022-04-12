#include<stdio.h>
#include<stdlib.h>
/**
* main - prints _putchar
*
* Return: Always (0) Success
*/
int main(void)
{
	char d[] = "_putchar";
	int i;
	
	i = 0;
	while (i < 7)
	{
		_putchar(d[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

