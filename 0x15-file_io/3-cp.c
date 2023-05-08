#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);
/**
 * close_file - this function closes the file descriptors.
 * @fd: the file descriptor that is to be closed by the function.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - this function allocates 1024 bytes for a buffer that
 * is to be created.
 * @file: the name of the file for which the buffer is storing
 * characters.
 *
 * Return: the new buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Cant write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * main - the main function copies the contents of a file to another
 * file
 * @argv: the array of pointers to arguments
 * @argc: number of arguments given to the program
 *
 * Return: 0 (Success)
 *
 * Description: if file_from does not exist or cannot be read then exit code 98
 * if file_to cannot be created or written to then exit code 99
 * if file_to or file_from cannot be closed then exit code 100
 * if argument count is incorrect then exit code 97.
 */
int main(int argc, char *argv[])
{
	int toFile, y, w, fromFile;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fromFile = open(argv[1], O_RDONLY);
	y = read(fromFile, buffer, 1024);
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fromFile == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(toFile, buffer, y);
		if (toFile == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		y = read(fromFile, buffer, 1024);
		toFile = open(argv[2], O_WRONLY | O_APPEND);
	} while (y > 0);

	free(buffer);
	close_file(fromFile);
	close_file(toFile);

	return (0);
}
