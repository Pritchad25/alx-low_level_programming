#include "main.h"
/**
 * append_text_to_file - this function appends text at the end of a file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * @filename: the name of the file.
 *
 * Return: 1 (Success) otherwise -1 if the function fails or the
 * filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int d;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}
	f = open(filename, O_WRONLY | O_APPEND);
	d = write(f, text_content, length);

	if (f == -1 || d == -1)
	{
		return (-1);
	}

	close(f);
	return (1);
}
