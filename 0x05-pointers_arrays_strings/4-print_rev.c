#include "main.h"
#include <string.h>
/**
 * print_rev - printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	char s1 = strrev(s);

	_putchar(s1);
}
