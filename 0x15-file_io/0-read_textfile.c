#include "main.h"
/**
*read_textfile-function to read a text file
*@filename:pointer size
*@letters:index
*Return:an integer
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	void *alpha;
	int pd = 0;
	ssize_t lettercont = 0, x = 0;

	if (filename == '\0')
		return (0);

	pd = open(filename, O_RDONLY, 0700);
	if (pd < 0)
		return (0);

	alpha = malloc(letters);
	if (alpha == '\0')
		return (0);

	lettercont = read(pd, alpha, letters)
		if (lettercont < 0)
		{
			free(alpha);
			close(pd);
			return (0);
		}
	x = write(STDOUT_FILENO, alpha, lettercont);
	if (x < 0 || x != lettercont)
	{
		free(alpha);
		close(pd);
		return (0);
	}
	free(alpha);
	close(pd);
	return (0);
}
