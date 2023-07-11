#include "main.h"
#define BUFFER_SIZE 1024

void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t written_bytes, read_bytes;

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to", 97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit("Can't read from file", 98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fd_to == -1)
	{
		error_exit("Can't write to file", 99);
	}

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes == -1)
		{
			error_exit("Can't write to file", 99);
		}
	}
	if (read_bytes == -1)
	{
		error_exit("Can't read from file", 98);
	}
	if (close(fd_from) == -1)
	{
		error_exit("Can't close file descriptor", 100);
	}
	if (close(fd_to) == -1)
	{
		error_exit("Can't close file descriptor", 100);
	}
	return (0);
}
