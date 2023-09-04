#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	char *buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	ssize_t bytes_read = fread(buffer, 1, letters, file);

	if (bytes_read <= 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	free(buffer);
	fclose(file);
	return bytes_written;
}
int main() {
	const char *filename = "example.txt";
	size_t letters_to_read = 100;  // Change this to the desired number of letters.

	size_t result = read_textfile(filename, letters_to_read);
	if (result == 0)
	{
   		fprintf(stderr, "Error reading or printing the file.\n");
	}
	else
	{
		printf("Successfully read and printed %zd letters.\n", result);
	}

	return (0);
}
