#include "main.h"
#include <string.h>

/**
* _puts_recursion - funtcion that prints a string followed by a new line
* @s: string to be printed byt the above function
*
* Return: returns nothing
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
		_putchar(*s);
		s++;
		_puts_recursion(s);
}
