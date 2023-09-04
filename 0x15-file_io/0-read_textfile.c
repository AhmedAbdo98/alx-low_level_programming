#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- read text file print to STDOUT.
 * @filename: text file be read
 * @letters: n.o letters to be read
 * Return: w- actual n.o bytes read and printed
 * 0 when func fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t f;
ssize_t x;
ssize_t y;
f = open(filename, O_RDONLY);
if (f == -1)
return (0);
buff = malloc(sizeof(char) * letters);
y = read(f, buff, letters);
x = write(STDOUT_FILENO, buff, y);
free(buff);
close(f);
return (x);
}
