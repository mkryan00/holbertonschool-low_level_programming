#include "main.h"
#include <stdio.h>

/**
  * print_alphabet - function to print the lowercase alphabet
  *
  * Return: 0
  */

void print_alphabet(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}

_putchar('\n');
}
