## 0x15. C-File I/O ##
# Learning Objectives  #
How to create, open, close, read and write files
What are file descriptors
What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
How to use the I/O system calls open, close, read and write
What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
What are file permissions, and how to set them when creating a file with the open system call
What is a system call
What is the difference between a function and a system call

Tasks to achieve this:
0. A function that reads a text file and prints it to the POSIX standard output.
   Prototype: ssize_t read_textfile(const char *filename, size_t letters);
   0-read_textfile.c

1. A function that creates a file.
   Prototype: int create_file(const char *filename, char *text_content);
   1-create_file.c

2. A function that appends text at the end of a file.
   Prototype: int append_text_to_file(const char *filename, char *text_content);
   2-append_text_to_file.c

3. A program that copies the content of a file to another file.
   3-cp.c

4. A program that displays the information contained in the
   ELF header at the start of an ELF file.
   100-elf_header.c