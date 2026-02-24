#include "main.h"

/**
* _strcat - Concatenates two strings
* @dest: destination string
* @src: source string
* @n: The limit of the concatenation
* Return: dest;
*/

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
int i = 0;

while (*ptr != '\0')
{
ptr++;
}

while (i < n && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
i++;
}

*ptr = '\0';

return (dest);
}
