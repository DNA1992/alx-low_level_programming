#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
* main - prints all possible combinations of two digits in ascending order sepa
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int degit1, degit2;

	for (degit1 = 0; degit1 < 9; degit1++)
	{
		for (degit2 = degit1 + 1; degit2 <= 9; degit2++)
		{
			putchar((degit1 % 10) + '0');
			putchar((degit2 % 10) + '0');

			if (degit1 == 8 && degit2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
