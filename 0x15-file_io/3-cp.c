#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER_SIZE 1024

int open_source_file(const char *filename);
int open_destination_file(const char *filename);
void copy_file(int fd_from, int fd_to);
void close_file(int fd);

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, or the corresponding exit code on failure
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open_source_file(argv[1]);
fd_to = open_destination_file(argv[2]);

copy_file(fd_from, fd_to);

close_file(fd_from);
close_file(fd_to);

return (0);
}

/**
 * open_source_file - Opens the source file for reading
 * @filename: The name of the source file
 *
 * Return: The file descriptor of the opened file, or -1 on failure
 */
int open_source_file(const char *filename)
{
int fd_from;

fd_from = open(filename, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}

return (fd_from);
}
/**
 * open_destination_file - Opens the destination file for writing
 * @filename: The name of the destination file
 *
 * Return: The file descriptor of the opened file, or -1 on failure
 */
int open_destination_file(const char *filename)
{
int fd_to;
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH; /* rw-rw-r-- */

fd_to = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}

return (fd_to);
}
/**
 * copy_file - Copies the content of the source file to the destination file
 * @fd_from: The file descriptor of the source file
 * @fd_to: The file descriptor of the destination file
 */
void copy_file(int fd_from, int fd_to)
{
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}
}
/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 */
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
