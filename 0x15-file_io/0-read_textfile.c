#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t bytes_read, bytes_written;
int fd;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
return (0);

fd = open_file(filename);
if (fd == -1)
{
free(buffer);
return (0);
}

bytes_read = read_file(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close_file(fd);
return (0);
}

close_file(fd);

bytes_written = write_to_stdout(buffer, bytes_read);
if (bytes_written != bytes_read)
{
free(buffer);
return (0);
}

free(buffer);
return (bytes_written);
}

/**
 * open_file - Opens a file and returns its file descriptor.
 * @filename: The name of the file to open
 *
 * Return: The file descriptor of the opened file, or -1 on failure
 */
int open_file(const char *filename)
{
int fd = open(filename, O_RDONLY);
return (fd);
}

/**
 * read_file - Reads from a file into a buffer.
 * @fd: The file descriptor of the file to read from
 * @buffer: The buffer to read the file content into
 * @letters: The number of letters to read
 *
 * Return: The number of bytes read, or -1 on failure
 */
ssize_t read_file(int fd, char *buffer, size_t letters)
{
ssize_t bytes_read = read(fd, buffer, letters);
return (bytes_read);
}

/**
 * close_file - Closes a file given its file descriptor.
 * @fd: The file descriptor of the file to close
 */
void close_file(int fd)
{
close(fd);
}

/**
 * write_to_stdout - Writes data to the standard output.
 * @buffer: The buffer containing the data to write
 * @bytes_to_write: The number of bytes to write
 *
 * Return: The number of bytes written, or -1 on failure
 */
ssize_t write_to_stdout(const char *buffer, size_t bytes_to_write)
{
ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_to_write);
return (bytes_written);
}
