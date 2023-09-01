#include "main.h"

/**
 * get_bit - returns the val of a bit at an index in a dec num
 * @n: num to search
 * @index: index of bit
 * Return: val of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_vall;
if (index > 63)
return (-1);
bit_vall = (n >> index) & 1;
return (bit_vall);
}
