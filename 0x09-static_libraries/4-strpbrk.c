#include "main.h"
/**
 * _strpbrk - entry point
 * @s: inp
 * @accept: inp
 * Return: always 0 (Succ)
 */
char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}
