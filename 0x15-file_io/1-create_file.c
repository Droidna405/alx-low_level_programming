#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
/**
 * create_file - Creates a file with the given name
 * and writes the given content to it.
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fd, write_status;
mode_t mode = S_IRUSR | S_IWUSR;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
write_status = write(fd, text_content, strlen(text_content));
if (write_status == -1)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
