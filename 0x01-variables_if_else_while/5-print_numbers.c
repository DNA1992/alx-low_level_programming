#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
*main - prints all numbers of base 10 starting from 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int baseTen;

	for (baseTen = 0; baseTen <= 9; baseTen++)
	{    printf("%d", baseTen);
	}

	printf("\n");

	return (0);
}
