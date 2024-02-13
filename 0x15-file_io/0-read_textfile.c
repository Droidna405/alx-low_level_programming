#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read, bytes_written;
char *buffer;
int fd;

/* Check if filename is NULL */
if (filename == NULL)
return (0);

/* Allocate memory for buffer */
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
return (0);

/* Open the file */
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

/* Read from the file */
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

/* Close the file */
close(fd);

/* Write to standard output */
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
return (0);
}

free(buffer);

return (bytes_written);
}
