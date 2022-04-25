#include "main.h"

/**
* cap_string - capitalises all words of a string
*@a:pointer for type char
*
* Return: string
*/
char *cap_string(char *a)
{
	char separator[] = " \t\n,;.!?\"(){}";
	int x, y;

	for (x = 0; a[x] != '\0'; x++)
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			if (x == 0)
				a[x] -= 32;

			else
			{
				for (y = 0; separator[y] != '\0'; y++)
				{
					if (a[x - 1] == separator[y])
						a[x] -= 32;
				}
			}

		}
	}
	return (a);
}
