#include<stdlib.h>
#include<stdio.h>
#include<time.h>
/**
* main - prints all possible combinations of two two digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int dig1, dig2, dig3, dig4;

	for (dig1 = 0; dig1 <= 9; dig1++)
	{
		for (dig2 = 0; dig2 <= 8; dig2++)
		{
			for (dig3 = 0; dig3 <= 9; dig3++)
			{
				for (dig4 = 0; dig4 <= 9; dig4++)
				{
					if (((dig3 + dig4) > (dig1 + dig2) && dig3 >= dig1) || dig1 < dig3)
					{
						putchar((dig1 % 10) + '0');
						putchar((dig2 % 10) + '0');
						putchar(' ');
						putchar((dig3 % 10) + '0');
						putchar((dig4 % 10) + '0');

					if (dig1 + dig2 + dig3 + dig4 == 227 && dig1)
					{
						break;
					}

					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n);

	return (0);
}
