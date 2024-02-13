#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 128

/**
 * read_elf_header - Reads and displays the ELF header information.
 * @filename: Name of the ELF file.
 */
void read_elf_header(const char *filename)
{
int fd, i;
char buf[BUF_SIZE];

fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Unable to read file '%s'\n", filename);
exit(98);
}

if (read(fd, buf, 4) != 4)
{
dprintf(STDERR_FILENO, "Error: Unable to read ELF header of '%s'\n", filename);
close(fd);
exit(98);
}

if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
{
dprintf(STDERR_FILENO, "Error: File '%s' is not an ELF file\n", filename);
close(fd);
exit(98);
}
lseek(fd, 1, SEEK_SET);

printf("ELF Header:\n  Magic:   ");
for (i = 0; i < 16; i++)
printf("%02x%c", buf[i], (i < 15) ? ' ' : '\n');

if (read(fd, buf, 16) != 16)
{
dprintf(STDERR_FILENO, "Error: Unable to read ELF header of '%s'\n", filename);
close(fd);
exit(98);
}

printf("  Class:                             ");
if (buf[4] == 1)
printf("ELF32\n");
else if (buf[4] == 2)
printf("ELF64\n");
else
printf("<unknown: %02x>\n", buf[4]);
printf("  Data:                              ");
if (buf[5] == 1)
printf("2's complement, little endian\n");
else if (buf[5] == 2)
printf("2's complement, big endian\n");
else
printf("<unknown: %02x>\n", buf[5]);

printf("  Version:                           %u (current)\n", buf[6]);
printf("  OS/ABI:                            ");
switch (buf[7])
{
case 0: printf("UNIX - System V\n"); break;
case 1: printf("HP-UX\n"); break;
case 2: printf("NetBSD\n"); break;
case 3: printf("Linux\n"); break;
case 6: printf("Sun Solaris\n"); break;
case 7: printf("AIX\n"); break;
case 8: printf("IRIX\n"); break;
case 9: printf("FreeBSD\n"); break;
case 10: printf("Compaq TRU64 UNIX\n"); break;
case 11: printf("Novell Modesto\n"); break;
case 12: printf("OpenBSD\n"); break;
case 13: printf("Open VMS\n"); break;
case 14: printf("Hewlett-Packard Non-Stop Kernel\n"); break;
case 15: printf("Amiga Research OS\n"); break;
case 16: printf("Nokia Data OS\n"); break;
default: printf("<unknown: %02x>\n", buf[7]);
}

printf("  ABI Version:                       %u\n", buf[8]);
printf("  Type:                              ");
switch (*(unsigned short *)(buf + 16))
{
case 0: printf("No file type\n"); break;
case 1: printf("REL (Relocatable file)\n"); break;
case 2: printf("EXEC (Executable file)\n"); break;
case 3: printf("DYN (Shared object file)\n"); break;
case 4: printf("CORE (Core file)\n"); break;
default: printf("<unknown: %02x%02x>\n", buf[16], buf[17]);
}

printf("  Entry point address:               0x");
for (i = 0; i < 16; i++)
printf("%02x", (unsigned char)buf[24 + i]);
printf("\n");

close(fd);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

read_elf_header(argv[1]);
return (0);
}
