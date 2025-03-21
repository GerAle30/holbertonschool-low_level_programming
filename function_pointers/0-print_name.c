#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - Preints a name using a function pointer
 *@name: The name to print
 *@f: function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
