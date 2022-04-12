#include"main.h"
/**
* main - prints _putchar followed by new line
*
* Return: Always (0) Success
*/
int main(void)
{
	char c[] = "_putchar";
	int i;

	i = 0;
	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
