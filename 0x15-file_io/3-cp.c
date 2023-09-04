#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Handles and prints error messages.
 * @message: The error message to print.
 * @code: The exit code.
 */
void handle_error(const char *message, int code)
{
	dprintf(2, "%s\n", message);
	exit(code);
}

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The source file.
 * @file_to: The destination file.
 *
 * Return: 0 on success, or an error code on failure.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int file_from_fd, file_to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	file_from_fd = open(file_from, O_RDONLY);
	if (file_from_fd == -1)
		handle_error("Error: Can't read from file", 98);

	file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_fd == -1)
		handle_error("Error: Can't write to file", 99);

	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			handle_error("Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		handle_error("Error: Can't read from file", 98);

	if (close(file_from_fd) == -1 || close(file_to_fd) == -1)
		handle_error("Error: Can't close file descriptor", 100);

	return (0);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		handle_error("Usage: cp file_from file_to", 97);

	copy_file(argv[1], argv[2]);

	return (0);
}
