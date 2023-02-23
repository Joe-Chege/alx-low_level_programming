#include <stdio.h>

/**
* main - Finds and prints the largest prime factor of 612852475143
*
* Return: 0 upon success
*/
int main(void)
{
long int num = 612852475143;
long int factor = 2;
long int largest_factor = 0;

while (num != 1)
{
if (num % factor == 0)
{
num = num / factor;
largest_factor = factor;
}
else
{
factor++;
}
}

printf("%ld\n", largest_factor);

return (0);
}
