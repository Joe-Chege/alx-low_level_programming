#include "main.h"

/**
* print_rev - prints a string in reverse order, followed by a new line
* @s: pointer to the string to print
*/
void print_rev(char *s)
{
int i = 0;

// Find the length of the string
while (s[i] != '\0')
i++;

// Print the string in reverse order
for (int i = i - 1; i >= 0; i--)
_putchar(s[i]);

// Print a newline character
_putchar('\n');
}
