#include "main.h"

/**
* print_square - prints a square of "#" characters of size "size"
* @size: the size of the square to print
* i is length, j is width
* Return: void
*/
void print_square(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}

_putchar('\n');
}
}
