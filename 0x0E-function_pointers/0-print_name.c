#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name- function that prints a name
 * @name: name
 * @f: function pointer
 * Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);

	if (name == NULL || f == NULL)
		return;
}
