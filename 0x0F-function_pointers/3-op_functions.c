#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two nm
 * @a: The fir nm
 * @b: The sec nm
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns the diff of two nm
 * @a: The fir nm
 * @b: The seco nm
 *
 * Return: The diff of a and b.
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Returns the product of two nms
 * @a: The fir nm
 * @b: The sec nm
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Returns the div of two nm
 * @a: The fir nm
 * @b: The sec nm
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns the remainder of the div of two nms
 * @a: The first nm
 * @b: The second nm
 *
 * Return: Remainder of the div of a by b.
 */
int op_mod(int a, int b)
{
return (a % b);
}
