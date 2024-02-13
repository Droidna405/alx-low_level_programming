#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);
int open_file(const char *filename);
ssize_t read_file(int fd, char *buffer, size_t letters);
void close_file(int fd);
ssize_t write_to_stdout(const char *buffer, size_t bytes_to_write);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
