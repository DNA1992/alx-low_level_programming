#include <stdio.h>
#include <stdlib.h>

/**
*main-prints all arguments
*@argc:argument length
*@argv:arguments passed to be printed
*Return: 0 if successful
*/

int main(int argc, char **argv)
{
	int x;

	x = 0;
	while (x < argc)
	{
		printf("%s\n", *argv);
		argv++;
		x++;
	}
	return (0);
}
