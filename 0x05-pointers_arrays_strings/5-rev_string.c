#include "maim.h"

/**
* rev_string - reverses a string
* @s: the string to be reversed
*
* Return: void
*/
void rev_string(char *s)
{
int i, l;
char temp;

l = 0;
while (s[l] != '\0')
l++;

for (i = 0; i < l / 2; i++)
{
temp = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = temp;
}
}
