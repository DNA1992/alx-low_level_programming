#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
*main - combination of numbers separated by a comma
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int degit;

	for (degit = 0; degit <= 9; degit++)
		putchar((degit % 10) + '0');
		putchar(',');
		putchar(' ');

	putchar('\n');

	return (0);
}
