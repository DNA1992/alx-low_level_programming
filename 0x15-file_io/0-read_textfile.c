#include "main.h"
/**
*read_textfile-function to read a text file
*@filename:pointer size
*@letters:index
*Return:an integer
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	void *buffer;
	int pd = 0;
	ssize_t lettercompa = 0, x = 0;

	if (filename == NULL)
		return (0);

	pd = open(filename, O_RDONLY, 0600);
	if (pd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	lettercont = read(pd, buffer, letters)
		if (lettercompa == -1)
		{
			free(buffer);
			close(pd);
			return (0);
		}
	x = write(STDOUT_FILENO, buffer, lettercompa);
	if (x == -1 || x != lettercompa)
	{
		free(buffer);
		close(pd);
		return (0);
	}
	free(buffer);
	close(pd);
	return (0);
}
