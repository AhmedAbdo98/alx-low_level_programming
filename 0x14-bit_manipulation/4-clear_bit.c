#include "main.h"

/**
 * clear_bit - sets the val of a given bit to 0
 * @n: pntr to the num to change
 * @index: index of the bit to clear
 * Return: 1 for succ -1 for fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
