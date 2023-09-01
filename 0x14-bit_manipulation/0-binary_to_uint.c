#include "main.h"

/**
 * binary_to_uint - converts a bin num to unsigned integer
 * @b: string contain bin num
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
int x;
unsigned int dec_value = 0;
if (!b)
return (0);
for (x = 0; b[x]; x++)
{
if (b[x] < '0' || b[x] > '1')
return (0);
dec_value = 2 * dec_value + (b[x] - '0');
}
return (dec_value);
}
