#include <stdlib.h>
#include <stdio.h>

/**
*main - program to output sum of integers thatare inputed
*@argc:length of arguments
*@argv:arguments
*Return: 0 on success
*/

int main(int argc, char **argv)
{
	int x;
	int y;
	int num = 0;

	if (argc <= 2)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; (argv[x])[y] != '\0'; y++)
			{
				if (((argv[x])[y] - '0') >= 0 && ((argv[x])[y] - '0') <= 9)
					continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			num += atoi(argv[x]);
		}
		printf("%d\n", num);
	}
	return (0);
}


