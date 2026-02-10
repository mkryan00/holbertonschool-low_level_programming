#include <stdio.h>

/**
 * main - this is the main function
 * Return: Always return 0
 */
int main(void)
{
char l;

for (l = 'a'; l <= 'z'; l++)
{
if (l != 'e' && l != 'q')
{
putchar(l);
}
}

putchar('\n');

return (0);
}
