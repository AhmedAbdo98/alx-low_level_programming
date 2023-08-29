#include "main.h"
/**
 *_memcpy - A func that copies memory area
 *@dest: memory where stored
 *@src: memory where copied
 *@n: no bytes
 *
 *Return: Copied memory with n byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
