#include "main.h"
/**
 * error_file - checks if files can be opened.
 * @file_from:- file_from
 * @file_to:- file_to
 * @argv: -arguments
 * Return:- always 0
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main
 * description: -file from doesnt exist,exit with code 98 n print an error,
 * file to fails,exit with code 99 n print an error
 * if can't close a file descriptor , exit with code 100 n print an error
 * @argc: first arg
 * @argv: second arg
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ff, ft, x_err;
	ssize_t h, y;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to\n");
		exit(97);
	}

	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(ff, ft, argv);

	h = 1024;
	while (h == 1024)
	{
		h = read(ff, buffer, 1024);
		if (h == -1)
			error_file(-1, 0, argv);
		y = write(ft, buffer, h);
		if (y == -1)
			error_file(0, -1, argv);
	}

	x_err = close(ff);
	if (x_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n",file_from);
		exit(100);
	}

	x_err = close(ft);
	if (x_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n",file_from);
		exit(100);
	}
	return (0);
}
