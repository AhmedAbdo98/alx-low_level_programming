#include "main.h"

/**
 * create_file - Create a file
 * @filename: A pntr to the name of the file to create
 * @text_content: A pntr to a string to write to the file
 * Return: If the func fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int f, m, ln = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (ln = 0; text_content[ln];)
ln++;
}
f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
m = write(f, text_content, ln);
if (f == -1 || m == -1)
return (-1);
close(f);
return (1);
}
