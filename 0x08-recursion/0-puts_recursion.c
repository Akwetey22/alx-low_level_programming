#include "main.h"
/**
 * _puts_recursion - funtion like puts();
 * @s: input
 * return: always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar ('\n');
}



