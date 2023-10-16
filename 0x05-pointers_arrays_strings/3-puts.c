#include "main.h"
/**
 * _puts - function nam
 *@str: function parameter
 */

void _puts(char *str)
{


while (str != '\0')
{
	_putchar (str++);
}
	_putchar ('\n');
}

