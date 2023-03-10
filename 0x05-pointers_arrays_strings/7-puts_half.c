#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
