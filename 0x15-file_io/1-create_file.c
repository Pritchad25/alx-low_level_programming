#include "main.h"
/**
 * create_file - this function creates a file.
 * @text_content: the NULL terminated string to write to the file.
 * @filename: the name of the file to create.
 *
 * Return: 1 (Success) otherwise -1 if write function fails or
 * filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int length1 = 0;
	int f;
	int g;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length1 = 0; text_content[length1];)
		{
			length1++;
		}
	}
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(f, text_content, length1);

	if (f == -1 || g == -1)
	{
		return (-1);
	}

	close(f);
	return (1);
}
