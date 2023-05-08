#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - this function reads a text file and prints to the
 * POSIX Standard Output.
 * @letters: the number of letters to be read and printed.
 * @filename: the text file being read.
 *
 * Return: the actual number of letters read and printed (Success)
 * otherwise 0 if the filename is NULL or the write function fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w;
	ssize_t s;
	char *tempBuffer;
	ssize_t f;

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	tempBuffer = malloc(sizeof(char) * letters);
	s = read(f, tempBuffer, letters);
	w = write(STDOUT_FILENO, tempBuffer, s);

	free(tempBuffer);
	close(f);

	return (w);
}
