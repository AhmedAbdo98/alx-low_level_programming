#include "main.h"

/**
 * print_binary - prints the binary equiv of a dec num
 * @n: num to print in bin
 */
void print_binary(unsigned long int n)
{
int x, c = 0;
unsigned long int current;
for (x = 63; x >= 0; x--)
{
c = n >> x;
if (c & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}