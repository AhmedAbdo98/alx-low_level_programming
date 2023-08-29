#include "main.h"
/**
 * _strlen - Return the len of a string
 * @s: String
 * Return: len
 */
int _strlen(char *s)
{
int longi = 0;

while (*s != '\0')
{
longi++;
s++;
}

return (longi);
}
