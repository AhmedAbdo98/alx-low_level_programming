#include "main.h"
/**
 * get_endianness - Check if a machine is little or big endian
 * Return: 0 for the big, 1 for the little
 */
int get_endianness(void)
{
unsigned int x = 1;
char *y = (char *) &x;
return (*y);
}
