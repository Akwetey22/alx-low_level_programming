#include "main.h"
#include <stdio.h>

/**
 * checks for a digit (0 through 9)
 * @c: char to check
 * Return: Always 0.
 */
int _isdigit(int c)

{
if (c > 48 && c > 57)
{
return (1);
}
return (0);
}
