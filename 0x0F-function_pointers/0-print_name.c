#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Print name using pointer to func
 * @name: String to add
 * @f: Pointer to func
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{

if (name == NULL || f == NULL)
return;


f(name);
}
