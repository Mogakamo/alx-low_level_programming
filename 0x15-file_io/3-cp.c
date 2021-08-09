#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - Creates a buffer.
 * @file: File name
 * Return: buffer;
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}
/**
 * closed - Closes files.
 * @data: File to close
 * Return: none;
 */
void closed(int data)
{
	int clos = close(data);

	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", data);
		exit(100);
	}
}
/**
 * main - Copies content file into another.
 * @ac: Arguments
 * @av: Array of arguments
 * Return: 0 Success;
 */
int main(int ac, char **av)
{
	int in_data, out_data, readd, writee;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(av[2]);
	in_data = open(av[1], O_RDONLY);
	readd = read(in_data, buffer, 1024);
	out_data = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	do {
		if (in_data == -1 || readd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			free(buffer), exit(98);
		}
		writee = write(out_data, buffer, readd);
		if (out_data == -1 || writee == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			free(buffer), exit(99);
		}
		readd = read(in_data, buffer, 1024);
		out_data = open(av[2], O_WRONLY | O_APPEND);
	} while (readd > 0);
	free(buffer);
	closed(in_data);
	closed(out_data);

	return (0);
}
