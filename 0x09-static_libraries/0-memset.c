#include "main.h"
/**
 * _memset - Fill a block of memory with a specific val
 * @s: Starting address of memory to be filled
 * @b: the desired val
 * @n: no bytes to be changed
 *
 * Return: changed array with a new val for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
