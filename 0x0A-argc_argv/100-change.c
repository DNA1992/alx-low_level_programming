#include <stdlib.h>
#include <stdio.h>

/**
*main- program to change currecncy to cents in order to give change
*@argc:length of arguments
*@argv:arguments printed
*Return:0 on success
*/

int main(int argc, char **argv)
{
	int centcoin = 0;
	int amt;

	if (argc == 2)
	{
		amt = atoi(argv[1]);
		if (amt < 0)
			printf("0\n");
		else
		{
			while (amt != 0)
			{
				if (amt - 25 >= 0)
					amt -= 25;
				else if (amt - 10 >= 0)
					amt -= 10;
				else if (amt - 5 >= 0)
					amt -= 5;
				else if (amt - 2 >= 0)
					amt -= 2;
				else if (amt - 1 >= 0)
					amt -= 1;

				centcoin++;
			}
			printf("%d\n", centcoin);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
