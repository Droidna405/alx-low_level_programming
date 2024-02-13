#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file
 * @text_content: The text content to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, write_status;
off_t offset;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

offset = lseek(fd, 0, SEEK_END);
if (offset == -1)
{
close(fd);
return (-1);
}

write_status = write(fd, text_content, strlen(text_content));
if (write_status == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
