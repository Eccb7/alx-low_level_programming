#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @v: pointer to the printing function
 */
void print_name(char *name, void (*v)(char *))
{
	if (!name || !v)
		return;
	v(name);
}
