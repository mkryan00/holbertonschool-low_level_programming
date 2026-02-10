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
putchar(l);
}
for (l = 'A'; l <= 'Z'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
