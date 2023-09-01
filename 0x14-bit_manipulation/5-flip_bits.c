#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 * to get from one num to another
 * @n: first num
 * @m: second num
 * Return: num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, c = 0;
unsigned long int curr;
unsigned long int ex = n ^ m;
for (x = 63; x >= 0; x--)
{
curr = ex >> x;
if (curr & 1)
c++;
}
